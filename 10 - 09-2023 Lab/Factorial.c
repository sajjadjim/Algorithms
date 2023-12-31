#include <stdio.h>

int result[1000] = {0};

int fact(int n) {
    if (n >= 0) {
        result[0] = 1;
        for (int i = 1; i <= n; ++i) {
            result[i] = i * result[i - 1];
        }
        return result[n];
    }
}

int main() {
    int n;
    while (1) {
        printf("Enter integer to compute factorial (enter 0 to exit): ");
        scanf("%d", &n);
        if (n == 0)
            break;
        printf("%d\n", fact(n));
    }
    return 0;
}

