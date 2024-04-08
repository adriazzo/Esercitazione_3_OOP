#include <iostream>
#include "ComplexNumber.hpp"

namespace ComplexLibrary{

Complex Complex::conjugate()
{
    Complex c(real, -imag);
    return c;
}
ostream& operator<<(ostream& os, const Complex &c)
{
    if(c.imag >= 0){
        ((os << c.real) << "+") << c.imag << "i";
    }
    else{
        (os << c.real) << c.imag << "i";
    }

    return os;
}

Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex c(c1.real + c2.real, c1.imag + c2.imag);
    return c;
}


bool operator==(const Complex &c1, const Complex &c2)
{
    bool t((c1.real == c2.real) && (c1.imag == c2.imag));
    return t;
}

}
