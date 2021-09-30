// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program finds the average of 3 integers 0-100

#include <iostream>

int main() {
    // This function finds the average of 3 integers 0-100
    int integer1;
    int integer2;
    int integer3;
    int the_sum;
    int average;

    // Input
    std::cout << "Enter an integer (0-100): ";
    std::cin >> integer1;
    std::cout << "Enter an integer (0-100): ";
    std::cin >> integer2;
    std::cout << "Enter an integer (0-100): ";
    std::cin >> integer3;
    std::cout << "" << std::endl;

    // Process
    the_sum = integer1 + integer2 + integer3;
    average = the_sum / 3;

    // Output
    std::cout << "The average is " << average << "." <<std::endl;

    std::cout << "\nDone." << std::endl;
}
