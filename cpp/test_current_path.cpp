#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

int main()
{
	string current_working_dir = get_current_dir_name();
	cout << current_working_dir << endl;

	//this one is related to where the file is compiled
	string current_file = __FILE__;
	cout << current_file << endl;
//	string current_module_file = GetModuleFileName() ;
//	cout << current_module_file << endl;
}
