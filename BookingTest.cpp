/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   BookingTest.cpp
 * Author: shota
 *
 * Created on August 20, 2020, 7:50 PM
 */
#include <iostream>

#include "BookingTest.h"
#include "Book.h"

//testing all movies requset api
bool BookingTest::TestAllMoviesApi() const {
  Book book({ {"theater_1", "movie_1"},
              {"theater_1", "movie_1"},
              {"theater_2", "movie_2"},
              {"theater_3", "movie_1"} });

  //retrieve all movies
  std::vector<std::string> all_movies = book.AllMovies();
  //check size and returned data
  if (all_movies.size() != 2) {
    std::cout<<"TestAllMoviesApi failed!"<<std::endl;
    return false;
  }

  if ((all_movies[0] == "movie_1" and all_movies[1] == "movie_2") or
      (all_movies[0] == "movie_2" and all_movies[1] == "movie_1")) {
        std::cout<<"Testing AllMoviesApi passed!"<<std::endl;
        return true;
      }

  std::cout<<"TestAllMoviesApi failed!"<<std::endl;
  return false;
}

///testing theater movies api
bool BookingTest::TestTheatersForMovie() const {
  Book book({ {"theater_1", "movie_1"},
              {"theater_1", "movie_1"},
              {"theater_2", "movie_2"},
              {"theater_3", "movie_1"} });

  //retrieve all movies
  std::vector<std::string> theaters = book.TheatersForMovie("movie_35");
  if (theaters.size() != 0) {
    std::cout<<"TestTheatersForMovie failed!"<<std::endl;
    return false;
  }

  //check returning single theater
  theaters = book.TheatersForMovie("movie_2");
  if (theaters.size() != 1 or theaters[0] != "theater_2") {
    std::cout<<"TestTheatersForMovie failed!"<<std::endl;
    return false;
  }

  //check returning single theater
  theaters = book.TheatersForMovie("movie_1");
  if (theaters.size() != 2) {
    std::cout<<"TestTheatersForMovie failed!"<<std::endl;
    return false;
  }
  //check returning theaters
  if ((theaters[0] == "theater_1" and theaters[1] == "theater_3") or
      (theaters[0] == "theater_3" and theaters[1] == "theater_1")) {
        std::cout<<"Testing TheatersForMovie passed!"<<std::endl;
        return true;
  }

  std::cout<<"TestTheatersForMovie failed!"<<std::endl;
  return false;
}

//check available seats for theater and its movie
bool BookingTest::TestAvailableSeats() const {
  Book book({ {"theater_1", "movie_1"} });

  //check theater that doesn't exist
  if (book.AvailableSeats("bla", "bla") != std::array<int, SEATS>{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1 ,1 ,1 ,1 ,1}) {
    std::cout<<"TestAvailableSeats failed!"<<std::endl;
    return false;
  }

  //check movie that doesn't exist for given theater
  if (book.AvailableSeats("theater_1", "bla") != std::array<int, SEATS>{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1 ,1 ,1 ,1 ,1}) {
    std::cout<<"TestAvailableSeats failed!"<<std::endl;
    return false;
  }


  //check initially empty
  if (book.AvailableSeats("theater_1", "movie_1") != std::array<int, SEATS>{}) {
    std::cout<<"TestAvailableSeats failed!"<<std::endl;
    return false;
  }

  //check non existing movie
  book.BookSeats("theater_1", "movie_1", {1, 2, 5});
  //check booked is occupied (equal to 1)
  if (book.AvailableSeats("theater_1", "movie_1") != std::array<int, SEATS>{0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 , 0, 0 , 0, 0, 0, 0}) {
    std::cout<<"TestAvailableSeats failed!"<<std::endl;
    return false;
  }

  //check non existing movie
  book.BookSeats("theater_1", "movie_1", {0, 1});
  //check booked is occupied (equal to 1)
  if (book.AvailableSeats("theater_1", "movie_1") != std::array<int, SEATS>{0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 , 0, 0 , 0, 0, 0, 0}) {
    std::cout<<"TestAvailableSeats failed!"<<std::endl;
    return false;
  }


  std::cout<<"Testing AvailableSeats passed!"<<std::endl;
  return true;
}

//check booking system for occupying
bool BookingTest::TestBookSeats() const {
  Book book({ {"theater_1", "movie_1"} });

  //check out of bound
  if (book.BookSeats("theater_1", "movie_1", {0, 19, 20})) {
    std::cout<<"BookSeats failed!"<<std::endl;
    return false;
  }

  //check out of bound
  if (book.BookSeats("theater_1", "movie_1", {-1, 19})) {
    std::cout<<"BookSeats failed!"<<std::endl;
    return false;
  }

  //check booking occupied seats
  if (!book.BookSeats("theater_1", "movie_1", {0, 1})) {
    std::cout<<"BookSeats failed!"<<std::endl;
    return false;
  }

  //check booking occupied seats
  if (book.BookSeats("theater_1", "movie_1", {1, 6})) {
    std::cout<<"BookSeats failed!"<<std::endl;
    return false;
  }

  //check booking
  if (!book.BookSeats("theater_1", "movie_1", {6, 11, 12, 15})) {
    std::cout<<"BookSeats failed!"<<std::endl;
    return false;
  }

  std::cout<<"Testing BookSeats passed!"<<std::endl;
  return true;

}
