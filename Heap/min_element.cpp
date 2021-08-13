#include <bits/stdc++.h>
using namespace std;

// Function to find the
// minimum element in a
// max heap
int findMinimumElement(int heap[], int n)
{
	int minimumElement = heap[n / 2];

	for (int i = 1 + n / 2; i < n; ++i)
		minimumElement = min(minimumElement, heap[i]);

	return minimumElement;
}

int main()
{
	// Number of nodes
	int n = 10;
	// heap represents the following max heap:
	//	 20
	//	 / \
	//	 18	 10
	// / \ / \
	// 12	 9 9 3
	// / \ /
	// 5 6 8
	int heap[] = { 20, 18, 10, 12, 9, 9, 3, 5, 6, 8 };

	cout << findMinimumElement(heap, n);

	return 0;
}
/*
INPUT / OUTPUT
3
*/