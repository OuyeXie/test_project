/*
 * test_poco.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: xieouye
 */
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <snappy.h>

using namespace std;


int main(int argc, char** argv) {

 string original = "asdfssssssssssfffffffffffdddddddddddddddccccccccccccasdfdddddddddddddc";

 cout << original << "\n";
 cout << original.length() << "\n";

 string compressed;

 snappy::Compress(original.c_str(), original.length() + 1, &compressed);

 cout << compressed << "\n";
 cout << compressed.length() << "\n";

 string uncompressed;

 char *c = (char *)compressed.c_str();

 cout << c << endl;
 cout << strlen(c) << endl;

 snappy::Uncompress(c, compressed.length() + 1, &uncompressed);

 cout << uncompressed << "\n";

 snappy::Uncompress(compressed.c_str(), compressed.length() + 1, &uncompressed);

 cout << uncompressed << "\n";

 string compressed_str = compressed;
 cout << compressed_str << endl;
 cout << compressed_str.find("\0") << endl;
 cout << compressed_str.find("f\0") << endl;
 cout << compressed_str.find("\0") << endl;
 cout << compressed_str.c_str() << endl;
 cout << compressed_str.length() << endl;
 cout << strlen(compressed_str.c_str()) << endl;

 compressed_str = "asdf\0aaasdfasdfasdf\0";
 cout << compressed_str << endl;
 cout << compressed_str.find("d\0") << endl;
 cout << compressed_str.find("aaa\0") << endl;
 cout << compressed_str.c_str() << endl;
 cout << compressed_str.length() << endl;
 cout << strlen(compressed_str.c_str()) << endl;

 string test = "\0";
 cout << test.c_str() << endl;
 test = "f\0";
 cout << test.c_str() << endl;
 test = "\0";
 cout << test.c_str() << endl;

 const char *test1 = "Fasdfsfd6c44dddddddddddddc";
 cout << test1 << endl;

 string test2 = "Fasdfsfd6c44dddddddddddddc";
 char test3[test2.length()];
 test2.copy(test3, test2.length());
 cout << test3 << endl;
 cout << test2.c_str() << endl;

 test2 = compressed;
 char test4[test2.length()];
 test2.copy(test4, test2.length());
 cout << test4 << endl;
 cout << string(test2.c_str()) << endl;


// Fasdfsfd6c44dddddddddddddc
// Fasdfs

 return 0;

}
