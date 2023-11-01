#include <stdio.h>
#include <stdlib.h>

int minDivision(int m, int coins[]) {
    int total = 0,i,j;
    for (i = 0; i < m; i++) {
        total += coins[i];
    }

    int half_total = total / 2;
    int *dp = (int *)malloc((half_total + 1) * sizeof(int));
    for (i = 0; i <= half_total; i++) {
        dp[i] = 0;
    }

    for (i = 0; i < m; i++) {
        for ( j = half_total; j >= coins[i]; j--) {
            dp[j] = (dp[j] > dp[j - coins[i]] + coins[i]) ? dp[j] : dp[j - coins[i]] + coins[i];
        }
    }

    int difference = total - 2 * dp[half_total];
    free(dp);
    return difference;
}

int main() {
    int N,i,j;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        int m;
        scanf("%d", &m);

        int coins[100];
        for (j = 0; j < m; j++) {
            scanf("%d", &coins[j]);
        }

        int difference = minDivision(m, coins);
        printf("%d\n", difference);
    }

    return 0;
}


