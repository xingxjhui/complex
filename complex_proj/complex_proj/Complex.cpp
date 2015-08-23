#include "stdafx.h"
#include "Complex.h"
#include <string>


Complex::Complex() : m_real(0.0), m_imaginary(0.0)
{
}

Complex::Complex(Complex& p_complex) : m_real(p_complex.GetReal()), m_imaginary(p_complex.GetImaginary())
{
}

Complex::Complex(double p_real, double p_imaginary) : m_real(p_real), m_imaginary(p_imaginary)
{
}

double
Complex::GetReal()
{
    return m_real;
}

double
Complex::GetImaginary()
{
    return m_imaginary;
}

std::string
Complex::ToString()
{
    std::string symbol;
    m_imaginary >= 0.0 ? symbol = " + " : symbol = " ";
    return std::string(std::to_string(m_real) + symbol + std::to_string(m_imaginary) + "i");
}

Complex
Complex::operator+(Complex& p_complex) const
{
    return Complex(m_real + p_complex.GetReal(),
                   m_imaginary + p_complex.GetImaginary());
}

Complex
Complex::operator-(Complex& p_complex) const
{
    return Complex(m_real - p_complex.GetReal(),
                   m_imaginary - p_complex.GetImaginary());
}

Complex
Complex::operator*(Complex& p_complex) const
{
    double real = m_real * p_complex.GetReal() - m_imaginary * p_complex.GetImaginary();
    double imaginary = m_imaginary * p_complex.GetReal() + m_real * p_complex.GetImaginary();
    return Complex(real, imaginary);
}

Complex
Complex::operator/(Complex& p_complex) const
{
    double real = (m_real * p_complex.GetReal() + m_imaginary * p_complex.GetImaginary())
        / (p_complex.GetReal() * p_complex.GetReal() + p_complex.GetImaginary() * p_complex.GetImaginary());
    double imaginary = (m_imaginary * p_complex.GetReal() - m_real * p_complex.GetImaginary())
        / (p_complex.GetReal() * p_complex.GetReal() + p_complex.GetImaginary() * p_complex.GetImaginary());
    return Complex(real, imaginary);
}

bool
Complex::operator=(Complex& p_complex) const
{
    return m_real == p_complex.GetReal() && m_imaginary == p_complex.GetImaginary();
}

Complex::~Complex()
{
}
