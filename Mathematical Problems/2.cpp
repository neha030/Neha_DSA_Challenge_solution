#include <bits/stdc++.h>
using namespace std;

void maxProductSum(string str, int m)
{
	int n = str.length();
	int maxProd = INT_MIN, maxSum = INT_MIN;
	for (int i = 0; i < n - m; i++) {
		int product = 1, sum = 0;

		for (int j = i; j < m + i; j++) {
			product = product * (str[j] - '0');
			sum = sum + (str[j] - '0');
		}

		maxProd = max(maxProd, product);
		maxSum = max(maxSum, sum);
	}
	cout << "Maximum Product = " << maxProd;
	cout << "\nMaximum Sum = " << maxSum;
}

int main()
{
	string str = "3675356291";
	int m = 5;

	maxProductSum(str, m);
}
