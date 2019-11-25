#include "arek.h"

// NIE ANALIZUJ
int arek::random_int(int min, int max)
{
	std::random_device device;
	std::mt19937 generator(device());
	std::uniform_int_distribution<int> distribution(min, max);
	
	return distribution(generator);
}
