#include <stdio.h>

int genFibonacci(int n) {
    int fibo[n + 2]; // array to store Fibonacci values
    // 0th and 1st number of the series are 0 and 1
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2]; // Generate ith term using previous two terms
    }
    return fibo[n];
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("%dth Fibonacci Terms: %d\n", n, genFibonacci(n));
    return 0;
}

