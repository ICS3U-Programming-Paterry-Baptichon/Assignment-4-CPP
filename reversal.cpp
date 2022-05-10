// Copyright (c) 2022 Paterry Baptichon J All rights reserved.
//
// Created by Paterry Baptichon
// Created on 2022-05-01
// This program asks you to input a list of numbers  it it will reverse it


#include <iostream>
#include <string>
#include <stdlib.h>
#include "colours/colors.h"
using namespace std;


int main() {
    // this is where i declare my variables
    std::string userAnswer;
    std::string n_str;    
    int n, reversed_number = 0, remainder;
    // asks for user input to reverse
    std::cout<< BOLDYELLOW <<"I am  going to reverse inputed number"<<std::endl;
    cout << BOLDMAGENTA<< "Enter an integer: ";
    cin >> n_str;
    std::cout << "" << std::endl;
    try {
        // integer into string
        n = std::stoi(n_str);
        // uses a while loop to reverse the user's number backwards
        while(n != 0) {
            remainder = n % 10;
            reversed_number = reversed_number * 10 + remainder;
            n /= 10;
        }
            // displat the reverse number to the user
            cout <<CYAN << "Reversed Number = " << reversed_number << "\n";
            // Ask if user would like to calculate again
            std::cout <<BOLDGREEN << "Would you like to calculate again? Y or N\n";
            std::cin >> userAnswer;
            if (userAnswer == "Y" || userAnswer == "y") {
            main();
      
            }
    // show invalid input if user inputs anything else than a positve integer
    } catch (std::invalid_argument) {
        std::cout << GREEN<< "oh no that didn't work, please"\
            " input a positive number!" << std::endl;

    }
}



