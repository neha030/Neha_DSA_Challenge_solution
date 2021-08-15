#include <bits/stdc++.h>
using namespace std;
int non_repeating(int arr[] , int n)
{
  unordered_map<int,int>mp;
  for (int i = 0; i < n; i++)
    {
      mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
        if (mp[arr[i]] == 1)
            return arr[i];
    return -1; 
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
    cout<<"First Repeating Element : ";
    cout<<(non_repeating(arr, n));
    return 0;
}
/*
INPUT / OUTPUT
Accept the total number of elements : 6
Accept the elements : 1 1 4 6 4 1
First Repeating Element : 6
*/