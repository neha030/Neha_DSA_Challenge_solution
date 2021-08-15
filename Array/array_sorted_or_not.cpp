#include <bits/stdc++.h>
using namespace std;
bool array_sorted(int arr[], int n)
{
   if(n==0 || n==1)
   return false;
   for(int i=1;i<n;i++)
   {
       if(arr[i-1]>arr[i])
       return false;
   }
   return true;
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
    if(array_sorted(arr,n))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}
/*
INPUT / OUTPUT
Accept the total number of elements : 5
Accept the elements : 1 2 4 5 3
No
*/