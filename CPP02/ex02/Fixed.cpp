#include "Fixed.hpp"

Fixed::Fixed()
{
    this->setRawBits(0);
}
Fixed::~Fixed() {}

Fixed::Fixed(int value)
{
    this->value = value * (1 << byte);

}
Fixed::Fixed(float float_value)
{
    this->value = roundf(float_value * (1 << byte));
}

Fixed::Fixed(const Fixed& copyValue)
{
    *this = copyValue;
}
Fixed& Fixed::operator= (const Fixed& op_value)
{
    if (this != &op_value)
    {
        this->value = op_value.getRawBits();
    }
    return *this;
}
float Fixed::toFloat( void ) const
{
    return (static_cast<float>(getRawBits()) / (1 << byte));
}
int Fixed::toInt( void ) const
{
    return (getRawBits() / (1 << byte));
}

void Fixed::setRawBits( int const raw )
{
    this->value = raw;
}
int Fixed::getRawBits( void ) const
{
    return (this->value);
}

bool Fixed::operator> (const Fixed& op_value) const
{
    return (value > op_value.value);
}
bool Fixed::operator>= (const Fixed& op_value) const
{
    return (value >= op_value.value);
}
bool Fixed::operator< (const Fixed& op_value) const
{
    return (value < op_value.value);
}
bool Fixed::operator<= (const Fixed& op_value) const
{
    return (value <= op_value.value);
}
bool Fixed::operator== (const Fixed& op_value) const
{
    return (value == op_value.value);
}
bool Fixed::operator!= (const Fixed& op_value) const
{
    return (value != op_value.value);
}

Fixed Fixed::operator+ (const Fixed& op_value) const
{
    Fixed inc = (this->toFloat() + op_value.toFloat());
    return inc;
}
Fixed Fixed::operator- (const Fixed& op_value) const
{
    Fixed dec = (this->toFloat() - op_value.toFloat());
    return dec;
}
Fixed Fixed::operator* (const Fixed& op_value) const
{
    Fixed ptr = (this->toFloat() * op_value.toFloat());
    return ptr;
}
Fixed Fixed::operator/ (const Fixed& op_value) const
{
    Fixed division = (this->toFloat() / op_value.toFloat());
    return division;
}
Fixed Fixed::operator++ (int)
{
    Fixed ptr = *this;
    value++;
    return ptr;
}
Fixed& Fixed::operator++ (void)
{
    this->value += 1;
    return *this;
}
Fixed Fixed::operator-- (int)
{
    Fixed ptr = *this;
    value--;
    return ptr;
}
Fixed& Fixed::operator-- (void)
{
    this->value -= 1;
    return *this;
}

const Fixed& Fixed::min (const Fixed& firstV, const Fixed& lastV)
{
    return (firstV <= lastV ? firstV : lastV);
}
const Fixed& Fixed::max (const Fixed& firstV, const Fixed& lastV)
{
    return (firstV >= lastV ? firstV : lastV);
}

Fixed& Fixed::min (Fixed& firstV, Fixed& lastV)
{
    return (firstV < lastV ? firstV : lastV);
}
Fixed& Fixed::max (Fixed& firstV, Fixed& lastV)
{
    return (firstV > lastV ? firstV : lastV);
}

std::ostream& operator<<(std::ostream& os, const Fixed& val)
{
    os << val.toFloat();
    return os;
}