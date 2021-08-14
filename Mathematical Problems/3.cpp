#include <bits/stdc++.h>
using namespace std;

int sumOfProductOfDigits(int n1, int n2)
{
	int sum = 0;

	while (n1 > 0 && n2 > 0)
	{
		sum += ((n1 % 10) * (n2 % 10));
		n1 /= 10;
		n2 /= 10;
	}
	return sum;
}

int main()
{
	int n1 = 25;
	int n2 = 1548;

	cout << sumOfProductOfDigits(n1, n2);
}

