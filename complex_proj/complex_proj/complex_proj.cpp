// complex_proj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include <assert.h>

int _tmain(int argc, _TCHAR* argv[])
{
    double precision = 0.0000000001;
    Complex complex1;
    bool one = (complex1.GetReal() - 0.0 < precision)
        && (complex1.GetImaginary() - 0.0 < precision);
    
    Complex complex2(1, 1);
    Complex complex3(2, 2);
    Complex complex4 = complex2 + complex3;
    Complex complex5 = complex2 - complex3;
    Complex complex6 = complex2 * complex3;
    Complex complex7 = complex2 / complex3;
    bool two = (complex4.GetReal()- 3.0 < precision) && (complex4.GetImaginary() - 3.0 < precision);
    bool three = (complex5.GetReal() - (-1.0) < precision) && (complex5.GetImaginary() - (-1.0) < precision);
    bool four = (complex6.GetReal() - 0.0 < precision) && (complex6.GetImaginary() - 4.0 < precision);
    bool five = (complex7.GetReal() - 0.5 < precision) && (complex7.GetImaginary() - 0.0 < precision);

    assert(one);
    assert(two);
    assert(three);
    assert(four);
    assert(five);

    return 0;
}

