


#include "Fixed.hpp"

int main()
{
    Fixed bihter;
    Fixed behlul(bihter);
    Fixed nihal;
    nihal = behlul;

    std::cout<< bihter.getRawBits()<<std::endl;
    std::cout<< behlul.getRawBits()<<std::endl;
    std::cout<< nihal.getRawBits()<<std::endl;
}