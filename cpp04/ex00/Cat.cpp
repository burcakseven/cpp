#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Default " + type + " constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Default " + type + " deconstructor" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
    std::cout << "Animal copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &assign)
{
    type = assign.type;
    std::cout << "Animal copy assigment operator called." << std::endl;

    return (*this);
}

void Cat::makeSound()
{
    std::cout << "Meeeeeooooowwwww" << std::endl;
}
