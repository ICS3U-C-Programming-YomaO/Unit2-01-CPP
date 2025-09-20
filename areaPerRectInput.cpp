// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : September 19, 2025
// This program calculates with a user input

#include <iostream>

int main() {
    std::cout << "Welcome to this program!" << std::endl;
    // get length from user
    int length;
    std::cout << "Enter the length of rectangle(mm): " <<std::endl;
    std::cin >> length;
    // get width from user
    int width;
    std::cout << "Enter the width of rectangle(mm): " << std::endl;
    std::cin >> width;
    // calculate area
    int area = length * width;
    // calculate perimeter
    int perimeter = 2 * (length + width);

    std::cout << "Area (mm^2): " << area << std::endl;
    std::cout << "Perimeter (mm): " << perimeter << std::endl;
}
