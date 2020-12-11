#include "ComplexNumber.h"

ComplexNumber add(ComplexNumber first, ComplexNumber second) {
	ComplexNumber result;
	result.re = first.re + second.re;
	result.re = first.im + second.im;
	return result;
}

ComplexNumber add(ComplexNumber first, double second) {
	ComplexNumber result;
	result.re = first.re + second;
	return result;
}

ComplexNumber sub(ComplexNumber first, ComplexNumber second) {
	ComplexNumber result;
	result.re = first.re - second.re;
	result.im = first.im - second.im;
	return result;
}

ComplexNumber sub(ComplexNumber first, double second) {
	ComplexNumber result;
	result.re = first.re - second;
	return result;
}