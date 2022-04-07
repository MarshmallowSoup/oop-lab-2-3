///////////////////////////////////////////////////////////////////////////
// BitString.h
#include <iostream>
#include <string>
#pragma once

using namespace std;

class BitString
{
private:
	long a;
	long b;
public:
	long getA() const { return a; };
	long getB() const { return b; };
	string toString();
	void read();
	void display();

	friend ostream& operator << (ostream&, const BitString&);
	friend istream& operator >> (istream&, BitString&);

	friend BitString Not(BitString obj);
	friend BitString Or(BitString obj1, BitString obj2);
	friend BitString And(BitString obj1, BitString obj2);


	BitString BitString(); 
	BitString BitString(long first, long second);
	BitString BitString(BitString obj);

	friend BitString operator ~ (BitString obj);
	friend BitString operator | (BitString obj1, BitString obj2);
	friend BitString operator & (BitString obj1, BitString obj2);
};
