#include <bits/stdc++.h>
using namespace std;

int main() 
{
   char str[100] = "this string contains many alphabets";
   int i = 0, alphabet[26] = {0}, j;
   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      ++i;
   }
   cout<<"Frequency of all alphabets in the string is:"<<endl;
   for (i = 0; i < 26; i++)
   cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;
   return 0;
}

/*
INPUT / OUTPUT
Frequency of all alphabets in the string is:
a : 4
b : 1
c : 1
d : 0
e : 1
f : 0
g : 1
h : 2
i : 3
j : 0
k : 0
l : 1
m : 1
n : 4
o : 1
p : 1
q : 0
r : 1
s : 4
t : 4
u : 0
v : 0
w : 0
x : 0
y : 1
z : 0
*/
