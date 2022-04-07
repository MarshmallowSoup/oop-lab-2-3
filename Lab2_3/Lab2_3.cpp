// Lab2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BitString.h"

int main()
{
	cout << "first object" << endl;
	BitString b1; // 1 variant
	b1.read();
	b1.display();
	cout << "second object" << endl;
	BitString b2; // 1 variant
	b2.read();
	b2.display();

	b1 | b2;
}