#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default deconstructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
    std::cout << "Animal copy constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &assign)
{
    type = assign.type;
    std::cout << "Animal copy assigment operator called." << std::endl;

    return (*this);
}

std::string Animal::getType()
{
    return type;
}

void Animal::makeSound()
{
    std::cout << "Animal sound." << std::endl;
}