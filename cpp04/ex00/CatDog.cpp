#include "CatDog.hpp"

Cat::Cat()
{
    type = "Cat";
}

Cat::~Cat()
{

}

void Cat::makeSound()
{
    std::cout << "Meeeeeooooowwwww" << std::endl;
}

Dog::Dog()
{
    type = "Dog";
}

Dog::~Dog()
{

}

void Dog::makeSound()
{
    std::cout << "Woof! Woof" << std::endl;
}