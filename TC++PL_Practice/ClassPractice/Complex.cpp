#include <cmath>
#include "Complex.h"
namespace comp{

Complex::Complex(double real, double imag)
{
    re = real;
    im = imag;
}
Complex::Complex(double real)
{
    re = real;
    im = 0;
}

double Complex::real() const
{
    return re;
}
double Complex::imaginary() const
{
    return im;
}
Complex Complex::add(const Complex& x)
{
    return Complex(re + x.real(), im + x.imaginary());
}
Complex Complex::minus(Complex x)
{
    return Complex(re - x.real(), im - x.imaginary());
}
Complex Complex::times(Complex x)
{
    return Complex(re * x.real() - im * x.imaginary(),
                    re * x.imaginary() + im * x.real());
}

Complex& Complex::operator+=(Complex x)
{
    re += x.real();
    im += x.imaginary();
    return *this;
}



bool operator==(const Complex& a, const Complex& b)
{
    return a.real() == b.real() && a.imaginary() == b.imaginary();
}

bool operator!=(const Complex& a,const Complex& b)
{
    return !(a == b);
}
Complex operator+(Complex a,Complex b)
{
    return a.add(b);
}
Complex operator-(Complex a,Complex b)
{
    return a.minus(b);
}
Complex operator*(Complex& a,Complex b)
{
    return a.times(b);
}
ostream& operator<<(ostream& s, Complex x)
{
    return s<<x.real()<<"+"<<x.imaginary()<<"i"; 
}
}














