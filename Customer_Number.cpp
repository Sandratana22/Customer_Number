
#include <iostream>
#include "Customer_Number.h" 

using namespace std;

namespace customers {
	bool customerNumber(const std::string& number) {
		if (number.length() != 6) {
			return false; 
		}
		else {
			return isalpha(number[0]) && isalpha((number[1])) && isdigit(number[2]) && isdigit(number[3]) && isdigit(number[4]) && isdigit(number[5]);
		}
	}
}