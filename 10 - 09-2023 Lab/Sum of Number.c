#include <stdio.h>

int sumOfNumbers(int n) {
    int sum = 0;
    int* dp = (int*)malloc((n+1) * sizeof(int));

    if (dp == NULL) {
        printf("Memory allocation failed.\n");
        return -1; // Return an error code
    }

    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1] + i;
    }

    sum = dp[n];
    free(dp); // Free allocated memory

    return sum;
}

int main() {
    int n;
    printf("Enter a positive integer 'n': ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sumOfNumbers(n);
        if (result != -1) {
            printf("Sum of the first %d natural numbers is: %d\n", n, result);
        }
    }

    return 0;
}
