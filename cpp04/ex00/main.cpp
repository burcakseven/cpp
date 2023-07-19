#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Cat *cat = new Cat();
    Animal *cati = new Dog();
    Animal *ani = new Animal();
    cati->makeSound();
    cat->makeSound();
    ani->makeSound();
    delete cat;
    delete cati;
    delete ani;
    WrongAnimal *wr = new WrongCat();
    wr->makeSound();
    delete wr;
    return 0;
}