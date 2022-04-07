#include "BitString.h"
#include "BitString.h"
#include "BitString.h"
///////////////////////////////////////////////////////////////////////////
// BitString.cpp
#include "BitString.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

void BitString::init(long a1, long b1)
{
	setA(a1);
	setB(b1);
}

string BitString::toString()
{
	stringstream sout;
	sout << to_string(a) << to_string(b);
	return sout.str();
}

void BitString::read()
{
	int x, y;

	cout << "First part =  "; cin >> x;
	cout << "Second part =  "; cin >> y;
	init(x, y);

}

void BitString::display()
{
	cout << endl;
	cout << "First part =  " << getA() << endl;
	cout << "Second part =  " << getB() << endl;
	cout << endl;
}

BitString::BitString()
{
	a = 0;
	b = 0;
}

BitString::BitString(long first, long second)
{ // initialization constructor with arguments
	a = first;
	b = second;
}

BitString::BitString(BitString obj)
{ // copy constructor
	a = obj.a;
	b = obj.b;
}

BitString Not(BitString obj)
{
	BitString res;
	res.a = ~obj.a;
	res.b = ~obj.b;
	return res;
}

BitString Or(BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a | obj2.a;
	res.b = obj1.b | obj2.b;
	return res;
}
BitString And(BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a & obj2.a;
	res.b = obj1.b & obj2.b;
	return res;
}

BitString operator~(BitString obj)
{
	BitString obj1;
	obj1.a = ~obj.a;
	obj1.b = ~obj.b;
	return obj1;
}
