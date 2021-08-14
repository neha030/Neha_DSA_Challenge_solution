#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void findMax(stack<int> s)
{
    int m = s.top(); 

    int a;

    while (!s.empty())
    {
        a = s.top();

        if (m < a)
            m = a; 

        s.pop(); 
    }

    cout << "\n\nThe maximum element of the Stack is: " << m << endl;
}

void show(stack<int> s)
{
    while (!s.empty())
    {
        cout << "  " << s.top(); 
        s.pop();                
    }

    cout << endl;
}

int main()
{
     int i;
    stack<int> s;

    s.push(4);
    s.push(2);
    s.push(20);
    s.push(12);
    s.push(52);
    s.push(14);

    cout << "\n\nThe elements of the Stack in LIFO order are: ";
    show(s);

    findMax(s); 

    cout << "\n\n\n";
    return 0;
}

/*
INPUT / OUTPUT 
The elements of the Stack in LIFO order are: 14 52 12 20 2 4
The maximum element of the Stack is: 52
*/