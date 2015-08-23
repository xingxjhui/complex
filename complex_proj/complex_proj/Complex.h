#pragma once
#include <string>

class Complex
{
public:
    Complex();

    Complex(Complex& p_complex);

    Complex(double p_real, double p_imaginary);
    
    double GetReal();

    double GetImaginary();

    std::string ToString();

    Complex operator+(Complex& p_complex) const;

    Complex operator-(Complex& p_complex) const;

    Complex operator*(Complex& p_complex) const;

    Complex operator/(Complex& p_complex) const;

    bool operator=(Complex& p_complex) const;

    ~Complex();

private:
    const double m_real;
    const double m_imaginary;
};

