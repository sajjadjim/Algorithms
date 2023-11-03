#include <stdio.h>
int sum_of_D(int n)
 {
    int sum = 0;
    while (n > 0) 
{
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int jim(int n) 
{
    while (n >= 10)
 {
        n = sum_of_D(n);
    }
    return n;
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0)
 {
            break;
        }
        int result =jim(n);
        printf("%d\n", result);
    }
    return 0;
}
