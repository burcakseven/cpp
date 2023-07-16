#include "Fixed.hpp"

/* Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
    std::cout << "" << std::endl;
 */
Fixed::Fixed()
{
    this->fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    fixedPointValue = fixed.fixedPointValue;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
        fixedPointValue = fixed.fixedPointValue;
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

Fixed::~Fixed()
{
    std::cout << "Deconstructor called" << std::endl;
}