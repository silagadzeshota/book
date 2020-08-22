/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: shotasilagadze
 *
 * Created on August 17, 2020, 10:07 AM
 */

#include <cstdlib>
#include <iostream>

#include "BookingTest.h"

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

  //if give -test=1 parameter on command line run tests and return
  if (argc > 1 and std::string(argv[1]).find("-test=", 0) != std::string::npos) {
      if (std::string(argv[1]).substr(std::string(argv[1]).find("=", 0) + 1, std::string(argv[1]).length() - std::string(argv[1]).find("=", 0) - 1) == "1") {
        if (!BookingTest::inst().Run()) std::cout << std::endl<<"\033[1;31mFail\033[0m\n"; else std::cout << std::endl<< "\033[1;32mTest Cases Passed!\033[0m\n";
        return 0;
      }
  }


    return 0;
}
