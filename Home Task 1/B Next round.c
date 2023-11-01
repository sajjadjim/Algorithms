#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }

    int temp = 0;
    int k_scores = scores[k - 1];

    for (int i = 0; i < n; i++) {
        if (scores[i] >= k_scores && scores[i] > 0) {
            temp++;
        }
    }

    printf("%d\n", temp);

    return 0;
}

