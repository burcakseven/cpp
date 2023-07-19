#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &dog);
    Dog &operator=(const Dog &assign);
    void makeSound();
};

#endif