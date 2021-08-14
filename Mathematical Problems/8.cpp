#include <iostream>
using namespace std;

int second_last_digit(int N) {
    // remove last digit of N
    N = N / 10;
    
    // N % 10 gives the last digit of N
    // since we have already removed last digit of N
    // therefore, N % 10 gives us the second last digit of N
    return N % 10;
}
int main() {
    int N;
    printf("Enter a Number: ");
    scanf("%d", &N);
    printf("Second Last Digit of %d = %d", N,  second_last_digit(N));
}