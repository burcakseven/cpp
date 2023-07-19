#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &animal);
    Animal &operator=(const Animal &assign);
    virtual void makeSound();
    std::string getType();
};

#endif