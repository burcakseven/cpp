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
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    // std::cout << "Copy constructor called" << std::endl;
    fixedPointValue = fixed.fixedPointValue;
}

Fixed::Fixed(const int value)
{
    // std::cout << "Int constructor called" << std::endl;
    setRawBits(value << fractionalBits);
}

Fixed::Fixed(const float value)
{
    // std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(value * (1 << fractionalBits)));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
        fixedPointValue = fixed.fixedPointValue;
    return *this;
}

void Fixed::setRawBits(const int raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

Fixed::~Fixed()
{
    // std::cout << "Deconstructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return (float)fixedPointValue / (1 << fractionalBits);
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

int Fixed::operator>(Fixed const &rhs) const
{
    if (this->getRawBits() > rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator<(Fixed const &rhs) const
{
    if (this->getRawBits() < rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator>=(Fixed const &rhs) const
{
    if (this->getRawBits() >= rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator<=(Fixed const &rhs) const
{
    if (this->getRawBits() <= rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator==(Fixed const &rhs) const
{
    if (this->getRawBits() == rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator!=(Fixed const &rhs) const
{
    if (this->getRawBits() != rhs.getRawBits())
        return (1);
    return (0);
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
    Fixed ret(this->toFloat() + rhs.toFloat());

    return (ret);
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
    Fixed ret(this->toFloat() - rhs.toFloat());

    return (ret);
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    Fixed ret(this->toFloat() * rhs.toFloat());

    return (ret);
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    Fixed ret(this->toFloat() / rhs.toFloat());

    return (ret);
}

Fixed &Fixed::operator++(void)
{
    this->fixedPointValue += 1;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->fixedPointValue -= 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;

    (this->fixedPointValue) += 1;
    return (temp);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;

    (this->fixedPointValue) -= 1;
    return (temp);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}