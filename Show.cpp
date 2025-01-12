#include "Show.h"
#include <iostream>

Show::Show(std::string title, std::string description)
    : title(title), description(description) {}

void Show::info() {
    std::cout << "Show Info: " << title << " - " << description << std::endl;
}

void Show::details() {
    std::cout << "No additional details for the show." << std::endl;
}

void Show::play() {
    std::cout << "Playing show..." << std::endl;
}
