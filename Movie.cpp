#include "Movie.h"
#include <iostream>

Movie::Movie(std::string title, std::string description, std::string openingCredits)
    : Show(title, description), openingCredits(openingCredits) {}

void Movie::info() {
    std::cout << "Movie Info: " << title << " - " << description << std::endl;
}

void Movie::details() {
    std::cout << "Opening Credits: " << openingCredits << std::endl;
}

void Movie::play() {
    std::cout << "Playing movie..." << std::endl;
}
