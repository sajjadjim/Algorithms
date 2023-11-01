#include <stdio.h>
int main() {
    int num, k;
    scanf("%d %d", &num, &k);

    for (int i = 0; i < k; i++) {
        if (num % 10 != 0) {
            num--;
        } else {
            num /= 10;
        }
    }

    printf("%d\n", num);

    return 0;
}

