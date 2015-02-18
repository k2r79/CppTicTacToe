#include "Utils.h"

int Utils::generateRandomInt(int min, int max) {
	return rand() % (max - min) + min;
}

std::string Utils::intToString(int number) {
	std::ostringstream stringStream;
	stringStream << number;

	return stringStream.str();
}

