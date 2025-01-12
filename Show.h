#ifndef SHOW_H
#define SHOW_H

#include <string>

class Show {
protected:
    std::string title;
    std::string description;

public:
    Show(std::string title, std::string description);
    virtual void info();
    virtual void details();
    virtual void play();
};

#endif
