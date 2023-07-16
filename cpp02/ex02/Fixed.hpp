#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
private:
    int fixedPointValue;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int value);
    Fixed(const float arg);
    Fixed &operator=(const Fixed &fixed);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    int operator>(Fixed const &rhs) const;
    int operator<(Fixed const &rhs) const;
    int operator>=(Fixed const &rhs) const;
    int operator<=(Fixed const &rhs) const;
    int operator==(Fixed const &rhs) const;
    int operator!=(Fixed const &rhs) const;
    Fixed operator+(Fixed const &rhs) const;
    Fixed operator-(Fixed const &rhs) const;
    Fixed operator*(Fixed const &rhs) const;
    Fixed operator/(Fixed const &rhs) const;
    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int n);
    Fixed operator--(int n);
    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif