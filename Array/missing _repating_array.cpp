#include <bits/stdc++.h>
using namespace std;

void printTwoElements(int arr[], int size)
{
	int i;
	cout << " The repeating element is ";

	for (i = 0; i < size; i++) {
		if (arr[abs(arr[i]) - 1] > 0)
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
		else
			cout << abs(arr[i]) << "\n";
	}

	cout << "and the missing element is ";
	for (i = 0; i < size; i++) {
		if (arr[i] > 0)
			cout << (i + 1);
	}
}

int getMissingNo(int a[], int n)
{
 
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
 
int main()
{
	int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printTwoElements(arr, n);
    int a[] = { 1, 2, 4, 5, 6 };
    int m = sizeof(a) / sizeof(a[0]);
    int miss = getMissingNo(a, m);
    cout << miss;
}

