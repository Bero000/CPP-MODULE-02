



#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        const static int c_int = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& copyValue);
        Fixed& operator=(const Fixed& copyAssign);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif