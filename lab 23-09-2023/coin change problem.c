 #include <stdio.h>
#include <limits.h>

int min(int a, int b)
{
    return (a > b) ? b : a;
}

int minCoins(int coins[], int n, int amount)
{
    int dp[n + 1][amount + 1];

    for (int i = 0; i <= amount; i++)
    {
        dp[0][i] = INT_MAX;
    }
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            if (coins[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
            }
        }
    }
    return dp[n][amount];
}

int main()
{
    int n;
    printf("Enter the number of coins demonstration: ");
    scanf("%d", &n);
    int coins[n];

    printf("Enter the coins demonstration:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &coins[i]);
    }
    int amount;
    printf("Enter the amount of change: ");
    scanf("%d", &amount);
    int result = minCoins(coins, n, amount);
    if (result == INT_MAX)
    {
        printf("It's not possible to make the given amount of change with the given coins\n");
    }
    else
    {
        printf("Minimum number of coins needed: %d\n", result);
    }
    return 0;
}
