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
    if(!type.compare("Cat"))
        std::cout << "Meeeeeooooowwwww" << std::endl;
    else if (!type.compare("Dog"))
        std::cout << "Woof! Woof" << std::endl;
}