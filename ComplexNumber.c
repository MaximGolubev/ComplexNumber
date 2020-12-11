#include "ComplexNumber.h"

ComplexNumber add(ComplexNumber first, ComplexNumber second) {
	ComplexNumber result;
	result.re = first.re + second.re;
	result.re = first.im + second.im;
	return result;
}