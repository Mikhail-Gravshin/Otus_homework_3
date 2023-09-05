#include "random_value.h"
#include <ctime>
#include <cstdlib>


int getRandomValue() {
	const int max_value = 100;

	std::srand(static_cast<unsigned int>(std::time(nullptr))); // use current time as seed for random generator

	const int random_value = std::rand() % max_value;
	return random_value;
}