#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default deconstructor" << std::endl;
}

std::string Animal::getType()
{
    return type;
}

void Animal::makeSound()
{
    std::cout << "Animal sound." << std::endl;
}