#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &cat);
    WrongCat &operator=(const WrongCat &assign);
    void makeSound();
};

#endif