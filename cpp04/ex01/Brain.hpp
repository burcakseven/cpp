#ifndef BRAIN_H
#define BRAIN_H
#include "Animal.hpp"

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    Brain(const Brain &brain);
    Brain &operator=(const Brain &assign);
    ~Brain();
};

#endif