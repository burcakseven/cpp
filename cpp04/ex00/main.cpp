#include "CatDog.hpp"

int main()
{
    Cat *cat = new Cat();
    cat->makeSound();
    delete cat;
    return 0;
}