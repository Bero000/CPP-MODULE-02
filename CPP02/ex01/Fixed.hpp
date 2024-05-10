#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
    private:
        int value;
        const static int c_int = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float float_value);
        Fixed(const Fixed& copyValue);
        Fixed& operator= (const Fixed& c_assign_operator);
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits( int const raw );
        int getRawBits( void ) const;
};
std::ostream &operator<<(std::ostream &o, const Fixed &f);

#endif