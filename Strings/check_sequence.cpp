#include <bits/stdc++.h>
using namespace std;

void checkforSubsequence(string S,string target)
{
	stack<char> s;

	// Push the characters of
	// target into the stack
	for (int i = 0; i < target.size(); i++) {
		s.push(target[i]);
	}

	// Traverse the string S in reverse
	for (int i = (int)S.size() - 1; i >= 0; i--) {

		// If the stack is empty
		if (s.empty()) {

			cout << "Yes" << endl;
			return;
		}

		// if S[i] is same as the
		// top of the stack
		if (S[i] == s.top()) {

			// Pop the top of stack
			s.pop();
		}
	}

	if (s.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

int main()
{
	string S = "KOTTAYAM";
	string target = "KOTA";

	checkforSubsequence(S, target);

	return 0;
}

/*
INPUT / OUTPUT
YES
*/