#include <iostream>
#include "Complex.h"
using namespace comp;
using namespace std;
int main()
{
    Complex x(1,2);
    Complex y(3);
    Complex z = x;

    Complex a = x.add(y);
    Complex b = x.minus(y);
    Complex c = x.times(y);

    cout << z.real()<<"+"<<z.imaginary()<<"i"<<endl;

    return 0;
}


