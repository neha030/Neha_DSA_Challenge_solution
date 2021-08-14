#include <iostream>
using namespace std;

int findSum(string str)
{
	// A temporary string
	string temp = "";

	// holds sum of all numbers present in the string
	int sum = 0;

	// read each character in input string
	for (char ch : str) {
		// if current character is a digit
		if (isdigit(ch))
			temp += ch;

		// if current character is an alphabet
		else {
			// increment sum by number found earlier
			// (if any)
			sum += atoi(temp.c_str());

			// reset temporary string to empty
			temp = "";
		}
	}

	// atoi(temp.c_str()) takes care of trailing
	// numbers
	return sum + atoi(temp.c_str());
}


int main()
{
	string str = "12abc20yz68";

	cout << findSum(str);

	return 0;
}

/*
INPUT / OUTPUT
100
*/