// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: September 2019
// This program will calculate the sum of two integers


#include <iostream>

int main() {
    int chosen_number;

    // input
    std::cout << "Enter a whole number (negative or positive): " << std::endl;
    std::cin >> chosen_number;

    // if ... then ... elseif ... else example
    if (chosen_number <= -1) {
        std::cout << "(-) negative.";
    } else if (chosen_number >= 1) {
        std::cout << "(+) positive.";
    } else {
        std::cout << "(0) neither, you thought you were tricky huh.";
    }
}
