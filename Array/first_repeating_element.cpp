#include <bits/stdc++.h>
using namespace std;
void repeating(int arr[] , int n)
{
    int min=-1;
    set<int>myset;
    for (int i = n - 1; i >= 0; i--)
    {
        if (myset.find(arr[i]) != myset.end())
            min = i;
 
        else   
            myset.insert(arr[i]);
    }
    if (min != -1)
        cout << "The first repeating element is " << arr[min];
    else
        cout << "There are no repeating elements";
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
    repeating(arr, n);
    return 0;
}
/*
INPUT / OUTPUT
Accept the total number of elements : 6
Accept the elements : 1 5 6 5 3 9
The first repeating element is 5
*/