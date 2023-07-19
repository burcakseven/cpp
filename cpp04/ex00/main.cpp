#include "CatDog.hpp"

int main()
{
    Cat *cat = new Cat();
    Animal *cati = new Dog();
    Animal *ani = new Animal();
    cati->makeSound();
    cat->makeSound();
    ani->makeSound();
    return 0;
}