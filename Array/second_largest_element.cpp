#include <bits/stdc++.h>
using namespace std;
void largest(int arr[] , int n)
{
    int i;
    if (n < 2) 
    {
        printf(" Invalid Input ");
        return;
    }
    sort(arr,arr+n);
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[n - 1])
        {
            cout<<"The second largest element is "<<arr[i];
            return;
        }
    }
 
    cout<<"There is no second largest element\n";

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
    largest(arr, n);
    return 0;
}
/*
INPUT / OUTPUT
Accept the total number of elements : 5
Accept the elements : 1 2 3 4 5
The second largest element is 4
*/