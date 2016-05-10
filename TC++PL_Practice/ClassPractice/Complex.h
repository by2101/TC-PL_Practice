#include <iostream>
namespace comp{

using std::ostream;

class Complex{

private:
    double re;
    double im;   


public:
    Complex(double real, double imag);
    Complex(double real);
    
    double real() const;
    double imaginary() const;

    Complex add(const Complex& x);
    Complex minus(Complex x);
    Complex times(Complex x);
    
    Complex& operator+=(Complex x);

};

bool operator==(const Complex& a,const Complex& b);
bool operator!=(const Complex& a,const Complex& b);
Complex operator+(Complex a,Complex b);
Complex operator-(Complex a,Complex b);
Complex operator*(Complex a,Complex b);
ostream& operator<<(ostream& s, Complex x);

};
