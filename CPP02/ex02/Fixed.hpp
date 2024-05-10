#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        const static int byte = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(int value);
        Fixed(float float_value);
        Fixed(const Fixed& copyValue);
        Fixed& operator= (const Fixed& op_value);
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits( int const raw );
        int getRawBits( void ) const;

        bool operator> (const Fixed& op_value) const;
        bool operator>= (const Fixed& op_value) const;
        bool operator< (const Fixed& op_value) const;
        bool operator<= (const Fixed& op_value) const;
        bool operator== (const Fixed& op_value) const;
        bool operator!= (const Fixed& op_value) const;

        Fixed operator+ (const Fixed& op_value) const;
        Fixed operator- (const Fixed& op_value) const;
        Fixed operator* (const Fixed& op_value) const;
        Fixed operator/ (const Fixed& op_value) const;

        Fixed operator++ (int op_value);
        Fixed& operator++ (void);
        Fixed operator-- (int op_value);
        Fixed& operator-- (void);

        const static Fixed& min (const Fixed& firstV, const Fixed& lastV);
        const static Fixed& max (const Fixed& firstV, const Fixed& lastV);

        static Fixed& min (Fixed& firstV, Fixed& lastV);
        static Fixed& max (Fixed& firstV, Fixed& lastV);

};
std::ostream& operator<<(std::ostream& os, const Fixed& val);
#endif