#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Default " + type + " constructor" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Default " + type + " deconstructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
    std::cout << "Animal copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &assign)
{
    type = assign.type;
    std::cout << "Animal copy assigment operator called." << std::endl;

    return (*this);
}

void Dog::makeSound()
{
    std::cout << "Woof! Woof" << std::endl;
}