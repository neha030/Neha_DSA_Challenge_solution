#include<bits/stdc++.h>
using namespace std;

int placeValue(int N, int num)
{
	int total = 1, value = 0, rem = 0;
	while (true)
	{
		rem = N % 10;
		N = N / 10;

		if (rem == num)
		{
			value = total * rem;
			break;
		}
		total = total * 10;
	}
	return value;
}

int main()
{
	int D = 5;
	int N = 85932;

	cout << (placeValue(N, D));
}
