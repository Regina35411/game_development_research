//============================================================================
// Name        : PointerArray.cpp
// Author      : Anuwat
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int MAX = 10;
	int array2D[MAX][MAX];

	int (*pointer)[MAX] = array2D;

	for (int r = 0; r < MAX; r++) {
		for (int c = 0; c < MAX; c++) {
			pointer[r][c] = r * c;
			cout << "r= " << r << ", c= " << c << ", val=" << pointer[r][c]  << endl;
		}
	}

	return 0;
}
