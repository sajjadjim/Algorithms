#include<stdio.h>
#include<string.h>
#define size 1024
char x[size], y[size];
int lcs[size][size];
int maxvalue(int a, int b)
{
    return a > b ? a : b;
}
int main()
{

    while(gets(x) && gets(y))
    {

        int xlen = strlen(x);
        int ylen = strlen(y);

        for(int i = 1; i <= xlen; ++i)
        {
            for(int j = 1; j <= ylen; ++j)
            {
                if(x[i-1] == y[j-1])
                    lcs[i][j] = lcs[i-1][j-1] + 1;
                else
                    lcs[i][j] = maxvalue(lcs[i-1][j], lcs[i][j-1]);
            }
        }


        printf("%d\n", lcs[xlen][ylen] );

    }
    return 0;
}

