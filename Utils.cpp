#include "Utils.h"

int Utils::generateRandomInt(int min, int max) {
	return rand() % (max - min) + min;
}

int Utils::promptUserForNumber(std::string text) {
	int number;

	std::cout << text << "\n";
	std::cin >> number;

	return number;
}

std::string Utils::intToString(int number) {
	std::ostringstream stringStream;
	stringStream << number;

	return stringStream.str();
}

