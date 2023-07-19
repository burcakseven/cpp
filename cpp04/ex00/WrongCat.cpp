#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Default WrongCat deconstructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
    *this = cat;
    std::cout << "Animal copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
    type = assign.type;
    std::cout << "Animal copy assigment operator called." << std::endl;

    return (*this);
}

void WrongCat::makeSound()
{
    std::cout << "Meeeeeooooowwwww" << std::endl;
}
