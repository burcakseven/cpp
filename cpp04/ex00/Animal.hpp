#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    ~Animal();
    void makeSound();
    std::string getType();
};

#endif