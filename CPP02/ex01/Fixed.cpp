#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<< "Default constructor called."<<std::endl;
    setRawBits(0);
}
Fixed::Fixed(int value)
{
    std::cout<< "Integer constructor called."<<std::endl;
    this->value = roundf(value * (1 << c_int));
}
Fixed::Fixed(float float_value)
{
    std::cout<< "Float constructor called."<<std::endl;
    this->value = roundf(float_value * (1 << c_int));
}
Fixed::Fixed(const Fixed& copyValue)
{
    std::cout<< "Copy constructor called."<<std::endl;
    *this = copyValue;
}
Fixed& Fixed::operator= (const Fixed& c_assign_operator)
{
    std::cout<< "Copy assign constructor called."<<std::endl;
    if (this != &c_assign_operator)
    {
        this->value = c_assign_operator.getRawBits();
    }
    return (*this);
}
Fixed::~Fixed()
{
    std::cout<< "Destructer called."<<std::endl;
}
void Fixed::setRawBits( int const raw )
{
    this->value = raw;
}
int Fixed::getRawBits( void ) const
{
    return (this->value);
}
float Fixed::toFloat( void ) const
{
    return ((float)getRawBits() / (1 << c_int));
}
int Fixed::toInt( void ) const
{
    return (getRawBits() / (1 << c_int));
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
    o<<f.toFloat();
    return o;
}