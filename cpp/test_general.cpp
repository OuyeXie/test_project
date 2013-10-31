/*
 * test_general.cpp
 *
 *  Created on: Oct 29, 2013
 *      Author: xieouye
 */

#include "../src/util/strUtil.hpp"
using namespace std;

set<string> strUtil::m_set_stopwords;

int main() {
	cout << "_________________________________________________" << endl;
	cout << "Test for strUitl::splitIPC" << endl;
	vector<string> vTerms;
	vector<string>::iterator it_term;
	string IPC = "A01B 1/00";
	strUtil::splitIPC(vTerms, IPC, DELIMITER_IPC);
	for(it_term = vTerms.begin(); it_term != vTerms.end(); )
				{
					cout << *it_term << endl;
					it_term++;
				}
	cout << "_________________________________________________" << endl;

	return 0;
}


