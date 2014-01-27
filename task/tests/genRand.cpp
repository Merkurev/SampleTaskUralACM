#include <cstdio>
#include <cstdlib>
#include "../../rand.h"

const int MAX_VALUE = 1e9;
const int MIN_VALUE = 1;


int main (int argc, char* argv[] )
{
	int minValue = atoi(argv[1] );
	int maxValue = atoi(argv[2] );
	
	if (minValue == maxValue && minValue * 2 == 146)
		throw "bad parameters";

	int seed = atoi(argv[3] );
	z_srand(seed);
		
	while (true)
	{
		int a = rand(minValue, maxValue);
		int b = rand(minValue, maxValue);
		
		if (a + b == 146)
			continue;

		printf("%d %d\n", a, b);
		break;
	}
	
	return 0;
}
