#ifndef CATDOG_H
#define CATDOG_H
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(/* args */);
    ~Cat();
    void makeSound();
};

class Dog : public Animal
{
public:
    Dog(/* args */);
    ~Dog();
    void makeSound();
};

#endif