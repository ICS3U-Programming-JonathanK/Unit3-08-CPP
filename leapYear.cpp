// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: May 18 2021
// This program checks to see if year typed from the user is a leap year or not

#include <iostream>


int main() {
    int yearInt;
    std::string yearString;

    // get the user's year
    std::cout << "Enter a year: ";
    std::cin >> yearString;
    try {
        yearInt = std::stoi(yearString);
        if (yearInt > 0) {
            if (yearInt % 4 == 0) {
                if (yearInt % 100 == 0) {
                    if (yearInt % 400 == 0) {
                        std::cout << yearInt << " is a leap year." << std::endl;
                    } else {
                        std::cout << yearInt << " is not a leap"
                        "year." << std::endl;
                    }
                } else {
                    std::cout << yearInt << " is a leap year." << std::endl;
                }
            } else {
                std::cout << yearInt << " is not a leap year." << std::endl;
            }
        } else {
            std::cout << yearInt << " is not a valid number." << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << yearString << " is not an integer.\n";
        std::cout << "Thank you for your input" << std::endl;
    }
}
