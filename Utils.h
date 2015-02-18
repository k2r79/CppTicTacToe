#ifndef UTILS_H_
#define UTILS_H_

#include <time.h>
#include <stdlib.h>
#include <string>
#include <sstream>

class Utils {
	public:
		static int generateRandomInt(int min, int max);
		static std::string intToString(int number);
};

#endif
