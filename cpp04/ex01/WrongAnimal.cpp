#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default deconstructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    *this = animal;
    std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
    type = assign.type;
    std::cout << "WrongAnimal copy assigment operator called." << std::endl;

    return (*this);
}

std::string WrongAnimal::getType()
{
    return type;
}

void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal sound." << std::endl;
}