/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Book.h
 * Author: shotasilagadze
 *
 * Created on August 17, 2020, 10:54 AM
 */

#ifndef BOOK_H
#define BOOK_H

#include <unordered_map>
#include <vector>
#include <set>

#include "Theater.h"

#define API

class Book {
public:
    //initialize theaters with own movies pair<theater_name, movie_name>
    Book(std::vector<std::pair<std::string, std::string > > data);
    Book(const Book& orig) = default;
    virtual ~Book() = default;

    //first api that shows all the movies shown in all theaters
    API std::vector<std::string> AllMovies() const;

    //return all theater names for particular movie
    API std::vector<std::string> TheatersForMovie(std::string movie) const;

    //returns available number of seats for particular movie in a given theater
    API std::array<int, SEATS> AvailableSeats(std::string theater, std::string movie) const;

    //book given seats for given theater and movie
    API bool BookSeats(std::string theater, std::string movie, std::vector<int> seats);


private:
    //all the available theaters
    std::unordered_map<std::string, Theater> theaters_;
};

#endif /* BOOK_H */
