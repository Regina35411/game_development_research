//============================================================================
// Name        : Pointers.cpp
// Author      : Anuwat
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void Func(int & y);



int main() {

	int b = 20;

	int & reft = b;

	reft = 50;

	int x = 5;

	Func(x);

	cout << "The value of x is : " << x << endl;

	cout << "The value of b is : " << b << endl;

	cout << "The value of reft is : " << reft << endl;

	return 0;


}

void Func(int & y)
{
	y = 15;
	cout << "The value of y is : " << y << endl;
}
