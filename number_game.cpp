// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program is a number guessing game

#include <iostream>

int main() {
    // this function is the game
    int number_guessed;
    const double answer = 5;

    // input
    std::cout << "Guess a number between 0-9: ";
    std::cin >> number_guessed;

    // process & output
    if (number_guessed == answer) {
        std::cout << "You guessed correctly!" << std::endl;
    }
    if (number_guessed != answer) {
        std::cout << "You guessed wrong!" << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "The correct answer was 5." << std::endl;
    std::cout << "Done." << std::endl;
}
