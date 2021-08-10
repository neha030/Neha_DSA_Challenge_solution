#include <bits/stdc++.h>
using namespace std;
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main()
{
    cout<<"Accept the total number of elements : ";
    int n;
    cin>>n;
    cout<<"Accept the elements : ";
    int arr[50] ;
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i] ;
    }
    rvereseArray(arr, 0, n-1);
     
    cout << "Reversed array is" << endl;
    printArray(arr, n);
     
    return 0;
}
/*
INPUT / OUTPUT
Accept the total number of elements : 5
Accept the elements : 1 2 3 4 5
Reversed array is
5 4 3 2 1 
*/