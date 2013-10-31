//============================================================================
// Name        : test_c++.cpp
// Author      : OuyeXie
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//char before[100] = "!!!Before Hello World!!!";
char* before = "!!!Before Hello World!!!";

int main() {
	cout << before << endl;
	cout << *before << endl;
	cout << &before << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
