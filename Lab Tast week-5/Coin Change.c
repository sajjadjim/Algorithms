#include <stdio.h>
int minCoins(int coins[], int numCoins, int total, int useCoins[]) {
    int dp[total + 1];
    dp[0] = 0;

    for (int i = 1; i <= total; i++) {
        dp[i] = total + 1;
        for (int j = 0; j < numCoins; j++) {
            if (coins[j] <= i && dp[i - coins[j]] + 1 < dp[i]) {
                dp[i] = dp[i - coins[j]] + 1;
                useCoins[i] = coins[j];
            }
        }
    }

    return dp[total];
}

int main() {
    int numCoins, total;
    printf("Enter number of coins: ");
    scanf("%d", &numCoins);

    int coins[numCoins];
    printf("Enter coin elements: ");
    for (int i = 0; i < numCoins; i++) {
        scanf("%d", &coins[i]);
    }

    printf("Enter given sum: ");
    scanf("%d", &total);

    int useCoins[total + 1];
    int minCoin = minCoins(coins, numCoins, total, useCoins);

    printf("The coins are: ");
    int remainingSum = total;
    while (remainingSum > 0) {
        printf("%d ", useCoins[remainingSum]);
        remainingSum =remainingSum - useCoins[remainingSum];
    }
    printf("\nMinimum number of coins: %d \n", minCoin);

    return 0;
    }
