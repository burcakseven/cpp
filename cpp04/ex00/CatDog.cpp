#include "CatDog.hpp"

Cat::Cat()
{
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << type + " CATOLDUMU" << std::endl;
}

Dog::Dog()
{
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << type + " DogOLDUMU" << std::endl;
}