#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

typedef struct {
	double re;
	double im;
} ComplexNumber;

// add two numbers
ComplexNumber add(ComplexNumber first, ComplexNumber second);
ComplexNumber add(ComplexNumber first, double second);

// sub two numbers
ComplexNumber sub(ComplexNumber first, ComplexNumber second);
ComplexNumber sub(ComplexNumber first, double second);

// multiply two numbers
ComplexNumber mul(ComplexNumber first, ComplexNumber second);
ComplexNumber mul(ComplexNumber first, double second);

// divide two numbers
ComplexNumber div(ComplexNumber first, ComplexNumber second);
ComplexNumber div(ComplexNumber first, double second);

// abs
double abs(ComplexNumber number);

typedef enum {
	Exponent,
	Algebraic,
	Trigonometric,
} Format;

char* toString(ComplexNumber number, Format format = Algebraic);


#endif