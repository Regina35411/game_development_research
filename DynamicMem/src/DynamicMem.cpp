//============================================================================
// Name        : DynamicMem.cpp
// Author      : Anuwat
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int * Func();
void Use(int * noptrInt);

int main() {

	int * optrNewInt = Func();

	Use(optrNewInt);

	delete optrNewInt;

	optrNewInt = nullptr;


	return 0;
}

int * Func() {
	return new int;
}

void Use(int * noptrInt) {

	//
}
