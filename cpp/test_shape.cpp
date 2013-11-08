#include <boost/multi_array.hpp>
#include <iostream>
using namespace std;

typedef boost::multi_array<int, 3> array_type;
typedef array_type::extent_range range;
typedef array_type::index index;

int main(){

array_type::extent_gen extents;
array_type A(extents[2][range(1,4)][range(-1,3)]);

cout << A.shape()[0] << endl;
cout << A.shape()[1] << endl;
cout << A.shape()[2] << endl;

vector<int> myVec;
myVec.reserve( 100 );
cout << myVec.size() << endl;

vector<int> myVec1;
myVec1.resize( 100 );
cout << myVec1.size() << endl;


}
