/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   BookingTest.h
 * Author: shota
 *
 * Created on August 20, 2020, 7:50 PM
 */

#ifndef BOOKINGTEST_H
#define BOOKINGTEST_H

  class BookingTest {

    public:
      //return the only instance of the class
      static BookingTest& inst() {
          static BookingTest test;
          return test;
      };

      //runs tests add new test in the function
      bool Run() {
        if (!TestAllMoviesApi()) return false;
        if (!TestTheatersForMovie()) return false;
        if (!TestAvailableSeats()) return false;
        if (!TestBookSeats()) return false;
        //return true if all tests pass
        return true;
      }

      //make singleton uncopiable
      BookingTest(const BookingTest&) = delete;
      void operator=(const BookingTest&) = delete;

    private:

      //testing getting unique movies api for all the theaters
      bool TestAllMoviesApi() const;

      //testing to get uniquely all movies for particular theater
      bool TestTheatersForMovie() const;

      //check available seats array validity
      bool TestAvailableSeats() const;

      //check booking seats and seeing them occupied
      bool TestBookSeats() const;

      BookingTest() = default;
      ~BookingTest() = default;
  };
#endif /* BOOKINGTEST_H */
