// activity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Customer_Number.h"

using namespace std; 

int main() {

	string number = "SA2209";

	if (customers::customerNumber(number)) {
		cout << number << " is a valid number!" << endl; 
	}
	else {
		cout << number << " is not a valid number!" << endl; 
	}

	return 0; 
}
