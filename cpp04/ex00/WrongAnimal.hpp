#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &animal);
    WrongAnimal &operator=(const WrongAnimal &assign);
    void makeSound();
    std::string getType();
};

#endif