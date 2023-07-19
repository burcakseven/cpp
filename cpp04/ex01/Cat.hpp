#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &cat);
    Cat &operator=(const Cat &assign);
    void makeSound();
};

#endif