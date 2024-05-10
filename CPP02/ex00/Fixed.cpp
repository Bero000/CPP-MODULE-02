#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<< "Default constructor called."<<std::endl;
    setRawBits(0);
}
Fixed::~Fixed()
{
    std::cout<< "Destructer called."<<std::endl;
}
Fixed::Fixed(const Fixed& copyValue)
{
    std::cout<< "Copy constructor called."<<std::endl;
    *this = copyValue;

}
Fixed& Fixed::operator=(const Fixed& copyAssign)
{
    std::cout<< "Copy assignment operator called."<<std::endl;
    if (this != &copyAssign)
    {
        this->value = copyAssign.getRawBits();
    }
    return (*this);
}
int Fixed::getRawBits( void ) const
{
    std::cout<< "getRawBits member function called."<<std::endl;
    return(this->value);
}
void Fixed::setRawBits( int const raw )
{
    this->value = raw;
}