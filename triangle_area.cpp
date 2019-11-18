// Copyright (c) 2019 St Mother Teresa High School All rights reserved.
//
// Created by: Dylan Hanna
// Created on: November 2019
// This program calulates the area of a triangle

#include <iostream>
#include <string>

int areaTriangle(int base, int height) {
    // This program calculates the area of a triangle from diffrent functions
    // variable declaration
    int area;
    // process
    area = base * height / 2;
    // output
    std::cout << "The area is "<< (area) << std::endl;
}

int main() {
    // This program calculates the area of a triangle from diffrent functions
    // variable declaration
    std::string base_as_string;
    std::string height_as_string;
    int base_as_int;
    int height_as_int;

    // input
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base_as_string;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height_as_string;

    std::cout << "" << std::endl;

    // process
    try {
        // coverts string to int
        base_as_int = std::stoi(base_as_string);
        height_as_int = std::stoi(height_as_string);

        // calls areaTriangle function
        areaTriangle(base_as_int, height_as_int);
    // prevents crashing
    } catch (std::invalid_argument) {
        std::cout << "For the love of code, put in an integer. Like, a number. Do you know what that is?" << std::endl;
    }
}