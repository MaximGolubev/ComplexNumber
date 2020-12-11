#include "ComplexNumber.h"

ComplexNumber add(ComplexNumber first, ComplexNumber second) {
	ComplexNumber result;
	result.re = first.re + second.re;
	result.re = first.im + second.im;
	return result;
}


char* toString(ComplexNumber number, Format format){
    char* result = (char*)malloc(sizeof(char));
    double fi = number.im/number.re;

    if (format == Algebraic){
        sprintf(result, "%f + %f * i", number.im, number.re);
    } else if (format == Exponent){
        sprintf(result, "e**(i*%f)", fi);
    } else if (format == Trigonometric){
        sprintf(result, "cos(%f) + i*sin(%f)", fi, fi);
    }

    return result;
}