#include "ComplexNumber.h"

ComplexNumber add(ComplexNumber first, ComplexNumber second) {
	ComplexNumber result;
	result.re = first.re + second.re;
	result.re = first.im + second.im;
	return result;
}

ComplexNumber div(ComplexNumber first, ComplexNumber second) {
	ComplexNumber result;

	// Putting numbers as new variables for better reading
	// This way first can be represented as (a + bi)
	// And second -- (c + di)
	double a = first.re;
	double b = first.im;
	double c = second.re;
	double d = second.im;

	result.re = (a*c + b*d) / (c*c + d*d);
	result.im = (b*c - a*d) / (c*c + d*d);

	return result;
}

ComplexNumber div(ComplexNumber first, double second) {
	ComplexNumber result;
	result.re = first.re / second;
	result.im = first.im / second;

	return result;
}