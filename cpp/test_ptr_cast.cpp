#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int *p = &a;
	cout << a << endl;
	cout << p << endl;
	cout << &p << endl;
	cout << *p << endl;
	int *p2 = (int *)p;

	cout << p2 << endl;
	cout << &p2 << endl;
	cout << *p2 << endl;
   return 0;
}
