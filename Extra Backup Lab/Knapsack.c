#include <stdio.h>
#define MAX_NUM 100
#define MAX_W 1000
long long maxValue(long long A, long long B) {
    return (A>B)?A:B;
}
int main()
{
    int NUM,W;
    scanf("%d %d",&NUM,&W);

    int weights[MAX_NUM+1];
    int values[MAX_NUM+1];

    for (int i=1; i<= NUM;i++)
        {
        scanf("%d %d", &weights[i], &values[i]);
    }

    long long dp[MAX_NUM+1][MAX_W+1];

    for (int  i=0;i<=NUM;i++)
     {
        for (int j=0; j<=W;j++)
            {
            if (i==0||j==0) {
                dp[i][j]=0;
            }
            else if (weights[i]>j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else

            {
                dp[i][j] = maxValue(dp[i - 1][j], dp[i - 1][j - weights[i]] + values[i]);
            }
        }
    }

    printf("%lld \n", dp[NUM][W]);

    return 0;
}

