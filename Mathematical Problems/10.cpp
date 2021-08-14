#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(string s)
{
	// Stores consecutive digits
	// present in the string
	int curr = 0;

	// Stores the sum
	int ret = 0;

	// Iterate over characters
	// of the input string
	for (auto& ch : s) {

		// If current character is a digit
		if (isdigit(ch)) {

			// Append current digit to curr
			curr = curr * 10 + ch - '0';
		}
		else {

			// Add curr to sum
			ret += curr;

			// Reset curr
			curr = 0;
		}
	}

	ret += curr;
	return ret;
}

int main()
{
	string S = "11aa32bbb5";
	cout << sumOfDigits(S);
	return 0;
}
