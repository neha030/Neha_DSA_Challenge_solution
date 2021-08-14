#include<bits/stdc++.h>
using namespace std; 
int count_3s(int n)
{
         int counter = 0;
         while (n > 0)
         {
                if (n % 10 == 3)
                {
                         counter++;
               }

              n = n / 10;
       }
       return counter;
}
int count_in_range(int n)
{
         int counter = 0 ;
        for (int i = 2; i <= n; i++)
        {
            counter = counter + count_3s(i);
        }
        return counter;
}
int main()
{  
         int n;
         printf("\nInsert the end value : ");
         scanf("%d", &n);
         printf("\nTotal occurrences of 3 from 0 to %d is %d\n", n,count_in_range(n));
        return 0;
}