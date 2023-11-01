#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    while (scanf("%d", &n) != EOF) {
        int prices[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &prices[i]);
        }
        int M ;
        scanf("%d", &M);
        int minDiff = M;
        int book1, book2;

        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (prices[i] + prices[j] == M) {
                    int different = abs(prices[i] - prices[j]);
                    if (different < minDiff) {
                        minDiff = different;
                        book1 = prices[i];
                        book2 = prices[j];
                    }
                }
            }
        }

        if (book1 > book2) {
            int temp = book1;
            book1 = book2;
            book2 = temp;
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n", book1, book2);
    }
    return 0;
}
