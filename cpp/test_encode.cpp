//To build: g++ test_encode.o -lPocoFoundation -o test_encode
#include <Poco/URI.h>
#include <iostream>

using namespace std;

int main()
{
	string query;
	string query_original = "%28AN%3A%28Johnson+%26+Johnson+vision+care%29+OR+AN_FR%3A%28Johnson+%26+Johnson+vision+care%29+OR+AN_DE%3A%28Johnson+%26+Johnson+vision+care%29+OR+AN_JP%3A%28Johnson+%26+Johnson+vision+care%29+OR+AN_CN%3A%28Johnson+%26+Johnson+vision+care%29%29";
	string query_mid = "(AN:(Johnson & Johnson vision care) OR AN_FR:(Johnson & Johnson vision care) OR AN_DE:(Johnson & Johnson vision care) OR AN_JP:(Johnson & Johnson vision care) OR AN_CN:(Johnson & Johnson vision care))";
	Poco::URI::encode(query_mid, " :&()", query);

	cout << query << endl;

}
