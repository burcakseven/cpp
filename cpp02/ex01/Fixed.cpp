#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(value << fractionalBits);
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    std::cout << value * (1 << fractionalBits) << std::endl << roundf(value * (1 << fractionalBits));
    setRawBits(value * (1 << fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
        fixedPointValue = fixed.fixedPointValue;
    return *this;
}

void Fixed::setRawBits(const int raw)
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

float Fixed::toFloat(void) const
{
    return (float)(fixedPointValue / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
    return (int)(fixedPointValue >> fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}