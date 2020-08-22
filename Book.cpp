/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Book.cpp
 * Author: shotasilagadze
 *
 * Created on August 17, 2020, 10:55 AM
 */
#include <iostream>

#include "Book.h"

Book::Book(std::vector<std::pair<std::string, std::string > > theater_info){
  //add every movie to corresponding theater
  for (auto & theater_movie : theater_info) {
    //first initialize key if not exists
    auto it = theaters_.find(theater_movie.first);
    //if no entry found add new theater
    if (it == theaters_.end()) {
      auto inserted = theaters_.emplace(std::piecewise_construct, std::forward_as_tuple(theater_movie.first), std::forward_as_tuple(theater_movie.first));
      inserted.first->second.AddMovie(theater_movie.second);
    } else {
      it->second.AddMovie(theater_movie.second);
    }

  }
};


//return all theater names for particular movie
API std::vector<std::string> Book::TheatersForMovie(std::string movie) const {
  std::vector<std::string> theaters;
  for(const auto & theater : theaters_) if (theater.second.HasMovie(movie)) theaters.push_back(theater.first);
  return theaters;
}

//number of available seats for movie in given theater
API std::array<int, SEATS> Book::AvailableSeats(std::string theater, std::string movie) const {
  if (theaters_.find(theater) == theaters_.end()) {
    std::array<int, SEATS> ret;
    std::fill_n(ret.data(), SEATS, 1);
    return ret;
  }
  return theaters_.find(theater)->second.AvailableSeats(movie);
}


//first api that shows all the movies shown in all theaters
API std::vector<std::string> Book::AllMovies() const {
  //select unique movie names
  std::set<std::string> unique_movies;
  //loop all theaters and all it's movies and select uniquely each movie
  for (auto & theater : theaters_ ) for (auto movie : theater.second.AllMovies()) unique_movies.insert(movie);
  return std::vector<std::string>(unique_movies.begin(), unique_movies.end());
}

//booking seats for movie for this particular theater
API bool Book::BookSeats(std::string theater, std::string movie, std::vector<int> seats) {
  if (theaters_.find(theater) == theaters_.end() or theaters_.find(theater)->second.HasMovie(movie) == false) return false;
  return theaters_.find(theater)->second.Book(movie,seats);
}
