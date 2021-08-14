#include<bits/stdc++.h>
using namespace std;

void findConsecutive(int N)
{

	// Note that we don't ever have to sum
	// numbers > ceil(N/2)
	int start = 1, end = (N+1)/2;

	// Repeat the loop from bottom to half
	while (start < end)
	{
	
		// Check if there exist any sequence
		// from bottom to half which adds up to N
		int sum = 0;
		for (int i = start; i <= end; i++)
		{
			sum = sum + i;

			// If sum = N, this means consecutive
			// sequence exists
			if (sum == N)
			{
			
				// found consecutive numbers! print them
				for (int j = start; j <= i; j++)
					cout <<" "<< j;

				cout <<"\n";
				break;
			}

			// if sum increases N then it can not exist
			// in the consecutive sequence starting from
			// bottom
			if (sum > N)
				break;
		}
		sum = 0;
		start++;
	}
}

int main(void)
{
	int N = 125;
	findConsecutive(N);
	return 0;
}

