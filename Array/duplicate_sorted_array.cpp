#include <bits/stdc++.h>
using namespace std;
int duplicateArray(int arr[], int n)
{
    if(n==0 || n==1)
    return n;
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        arr[j++]=arr[i];
    }
    arr[j++]=arr[n-1];
    return j;
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
    duplicateArray(arr, n);
     
    cout << "Array after removing Duplicates" << endl;
    printArray(arr, n);
     
    return 0;
}
/*
INPUT / OUTPUT
Accept the total number of elements : 5
Accept the elements : 1 2 3 3 5
Array after removing Duplicates
1 2 3 5 
*/