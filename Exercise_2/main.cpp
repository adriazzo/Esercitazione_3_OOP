#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

int main()
{
    ComplexLibrary::Complex c1(1, 2);
    ComplexLibrary::Complex c2(1, -4);

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    ComplexLibrary::Complex sum = c1 + c2;
    cout << "sum of c1 + c2: " << sum << endl;


    ComplexLibrary::Complex c_bar = c1.conjugate();
    cout << "The conjugate of " << c1 << " is " << c_bar << endl;


    bool same = c1 == c2;
    if (same){
        cout << "c1 and c2 are the same" << endl;
    }
    else{
        cout << "c1 and c2 are not the same" << endl;
    }


    return 0;
}
