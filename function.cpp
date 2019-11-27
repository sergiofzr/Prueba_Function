// function.cpp : This file contains the 'main' function. Program execution begins and ends there.
// extra comment


#include "pch.h"
#include <iostream>
using namespace std;

long factorial(int n) {
	if (n == 0) return 1L;
	return n * factorial(n - 1);
}

double f(int i) {
	return (i*i + (i - 1)*(i - 1) + (i - 2)*(i - 2) - 5) / 3.14;
}

int main()
{
	int x;
	cout << "Enter one intenger: \n";
	cin >> x;

	float y = 3.14;

	double z = y + f(x);
	
	cout << "The value of z is: " << z << '\n';
}
