#include <cstdio>
#include <cstdlib>
#include "../../rand.h"

const int MAX_VALUE = 1e9;
const int MIN_VALUE = 1;
const int number = 4;

int values[number];

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
		for (int i = 0; i < number; i++)
			values[i] = rand(minValue, maxValue);
		z_random_shuffle(values, values + number);
		
		int a = values[0], b = values[1];
		if (a + b == 146)
			continue;

		printf("%d %d\n", a, b);
		break;
	}
	
	return 0;
}
