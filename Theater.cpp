/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Theater.cpp
 * Author: shotasilagadze
 *
 * Created on August 17, 2020, 10:20 AM
 */

#include "Theater.h"



//check if movie is present in theater (exists the key)
bool Theater::HasMovie(std::string movie) const {
  return movies_.find(movie) != movies_.end();
}


//check if movie is present in theater (exists the key)
std::array<int, SEATS> Theater::AvailableSeats(std::string movie) const {
  if (movies_.find(movie) == movies_.end()) {
    std::array<int, SEATS> ret;
    std::fill_n(ret.data(), SEATS, 1);
    return ret;
  }
  return movies_.find(movie)->second;
}

//booking given seats if available
bool Theater::Book(std::string movie, std::vector<int> seats) {
  std::lock_guard<std::mutex> guard(seats_locker_);
  //check if seat range is correct and it's not booked yet
  if (seats.size() > SEATS) return false;
  for(auto seat : seats) if (seat < 0 or seat >= SEATS or movies_[movie][seat]) return false;

  //actually book all given seats (mark as used = 1)
  for (auto seat : seats) movies_[movie][seat] = 1;

  return true;
}

//return all movies (keys from unordered map)
std::vector<std::string> Theater::AllMovies() const {
  std::vector<std::string> movie_names;
  for(auto & movie : movies_) movie_names.push_back(movie.first);
  return movie_names;
}
