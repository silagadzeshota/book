/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Theater.h
 * Author: shotasilagadze
 *
 * Created on August 17, 2020, 10:20 AM
 */

#ifndef THEATER_H
#define THEATER_H

#include <unordered_map>
#include <mutex>
#include <array>
#include <vector>

//number of available seats for movie/theater by default
#define SEATS 20

class Theater {

public:
    //empty initializer
    Theater(std::string name) : name_(name) {};

    //add new movie to theater with all empty seats
    void AddMovie(std::string movie) {
      if (movies_.find(movie) == movies_.end()) movies_[movie] = std::array<int, SEATS>{};
    }

    //return all movies (keys from unordered map)
    std::vector<std::string> AllMovies() const;

    //check if movie is present in theater (exists the key)
    bool HasMovie(std::string movie) const;

    //check if movie is present in theater (exists the key)
    std::array<int, SEATS> AvailableSeats(std::string movie) const;

    //booking for movie for this particular theater seats number of seats
    bool Book(std::string movie, std::vector<int> seats);

    //default copy and destructor
    Theater(const Theater& orig) = default;
    ~Theater() = default;

private:
    //theater name
    std::string name_;

    //movies that is shown in this theater
    std::unordered_map<std::string, std::array<int, SEATS> > movies_;

    //to synchronize booking particular seats
    std::mutex seats_locker_;
};

#endif /* THEATER_H */
