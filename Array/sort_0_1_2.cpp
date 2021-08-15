#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{
    int low=0;
    int high=n-1;
    int mid =0;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:
            swap(arr[low++],arr[mid++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(arr[mid],arr[high--]);
            break;
        }
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
    sort012(arr, n);
     
    cout << "Array after segration" << endl;
    printArray(arr, n);
     
    return 0;
}
/*
INPUT / OUTPUT
Accept the total number of elements : 5
Accept the elements : 1 1 2 0 2
Array after segration
0 1 1 2 2 
*/