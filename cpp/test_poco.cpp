/*
 * test_poco.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: xieouye
 */
#include <iostream>
#include <Poco/String.h>

using Poco::trim;
using Poco::trimLeft;
using Poco::trimRight;
using Poco::trimRightInPlace;

using namespace std;


int main(int argc, char** argv) {

 string hello("  Hello, world!  ");

 cout << hello << "\n";

 string s1(trimLeft(hello)); // "Hello, world!  "

 cout << s1 << "\n";

 trimRightInPlace(s1);            // "Hello, world!"

 cout << s1 << "\n";

 string s2(trim(hello));     // "Hello, world!"

 cout << s2 << "\n";

 return 0;

}
