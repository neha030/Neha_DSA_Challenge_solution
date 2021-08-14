#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long maxPrimeFactors(long long n)
{
	// Initialize the maximum prime factor
	// variable with the lowest one
	long long maxPrime = -1;

	// Print the number of 2s that divide n
	while (n % 2 == 0) {
		maxPrime = 2;
		n >>= 1; // equivalent to n /= 2
	}
// n must be odd at this point
	while (n % 3 == 0) {
		maxPrime = 3;
		n=n/3;
	}

	// now we have to iterate only for integers
	// who does not have prime factor 2 and 3
	for (int i = 5; i <= sqrt(n); i += 6) {
		while (n % i == 0) {
			maxPrime = i;
			n = n / i;
		}
	while (n % (i+2) == 0) {
			maxPrime = i+2;
			n = n / (i+2);
		}
	}

	if (n > 4)
		maxPrime = n;

	return maxPrime;
}

int main()
{
	long long n = 15;
	cout << maxPrimeFactors(n) << endl;

	n = 25698751364526;
	cout << maxPrimeFactors(n);

}
