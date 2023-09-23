#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int values[], int weights[], int n, int capacity) {
    int dp[n + 1][capacity + 1];

    for(int i = 0; i <= n; i++) {
        for(int w = 0; w <= capacity; w++) {
            if(i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if(weights[i - 1] <= w) {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity];
}

int main() {
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    int values[n];
    int weights[n];

    printf("Enter the values and weights of the item:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &values[i], &weights[i]);
    }
    int capacity;
    printf("Enter the knapsack capacity: ");
    scanf("%d", &capacity);
    int result = knapsack(values, weights, n, capacity);
    printf("The max value that can be obtained: %d\n", result);
    return 0;
}
