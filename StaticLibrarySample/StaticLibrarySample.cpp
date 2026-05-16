// StaticLibrarySample.cpp : Defines the functions for the static library.
//

#include "StaticLibrarySample.h"

// TODO: This is an example of a library function
void fnStaticLibrarySample()
{
	std::cout << "static library." << std::endl;
}

int sum(int a, int b)
{
	std::cout << "calling sum" << std::endl;
	return a + b;
}

int multiply(int a, int b)
{
	std::cout << "multiply called" << std::endl;
	return a * b;
}