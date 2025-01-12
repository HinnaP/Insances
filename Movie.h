#ifndef MOVIE_H
#define MOVIE_H

#include "Show.h"
#include <string>

class Movie : public Show {
private:
    std::string openingCredits;

public:
    Movie(std::string title, std::string description, std::string openingCredits);
    void info() override;
    void details() override;
    void play() override;
};

#endif
