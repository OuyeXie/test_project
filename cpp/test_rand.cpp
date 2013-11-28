#include <cstdlib>
#include <boost/multi_array.hpp>

using namespace std;

int SOM_Y = 9;
int SOM_X = 9;
int NDIMEN = 100;

void init_codebook(unsigned int seed)
{
	srand(seed);
	boost::multi_array<float, 3> CODEBOOK;
	CODEBOOK.resize(boost::extents[SOM_Y][SOM_X][NDIMEN]);
	for (int y = 0; y < SOM_Y; y++) {
		for (int x = 0; x < SOM_X; x++) {
			int pos = (y * SOM_X + x) * NDIMEN;
			for (int d = 0; d < NDIMEN; d++) {
		//ysz
		//		int w = 0xFFF & rand();
				//w -= 0x800;
//				*(CODEBOOK.data() + pos + d) = (FLOAT_T)w / 4096.0;
				int b = rand()%2;
				*(CODEBOOK.data() + pos + d) = (float)b;
				cout << *(CODEBOOK.data() + pos + d)<<"\t";
			}
		}
	}
}

int main(){

	init_codebook(1);
	return 0;

	}
