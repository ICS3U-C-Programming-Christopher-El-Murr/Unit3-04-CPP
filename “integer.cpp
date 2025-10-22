// Copyright (c) 2025 Christopher El-Mur All rights reserved
// Created by Christopher El-Mur
// Date:Oct 16 2025
// This program asks the user to input a number
// and tells them if it is positive, negative or 0
#include <iostream>

int main() {
    int userInput;

    std::cout << "Enter your number: ";
    std::cin >> userInput;
    if (userInput < 0){
        std::cout << "This number is negative";
    }
        else if (userInput > 0){
            std::cout << "This number is positive";
        }
            else if (userInput == 0){
            std::cout << "This number is 0";
    }
 }