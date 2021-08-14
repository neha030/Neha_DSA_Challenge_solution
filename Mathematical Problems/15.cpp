#include<iostream>
using namespace std;

int fact(long int x)

{

long int f=1,i;

for(i=1;i<=x;i++)

{

f=f*i;

}

return f;

}

int main()

{

long int n,r,p,temp;

long int num,den;

cout << "nEnter the number of seats available : ";

cin >> r;

cout << "nEnter the number of persons : ";

cin >> n;

if(n < r)

{

temp=n;

n=r;

r=temp;

}

num=fact(n);

den=fact(n-r);

p=num/den;

cout << "nNumber of ways people can be seated : ";

cout << p << endl;

}

