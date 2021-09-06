// Source code for the library functions
#include "pch.h" // this must be imported first
#include <iostream>
#include "my_dll_for_python.h"


void display_message() {
	std::cout << "It worked!" << std::endl;
}

void display_message_with_input(int a) {
	std::cout << "Your input: " << a << std::endl;
}

int add_ints(int a, int b) {
	return a + b;
}

double add_doubles(double a, double b) {
	return a + b;
}

double sum_array(double a[], int length) {
	double sum{ 0 };
	for (int i{ 0 }; i < length; ++i)
		sum += a[i];
	return sum;
}

void square_array(double a[], int length) {
	for (int i{ 0 }; i < length; ++i)
		a[i] *= a[i];
}
