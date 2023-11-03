#include <stdio.h>
int binary_Search(int arry[], int N, int key)
{
    int low = 0, high = N - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arry[mid] == key) {
            return 1;
        } else if (arry[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}

int binary_S(int arry[], int low, int high, int key)
 {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arry[mid] == key) {
            return 1;
        } else if (arry[mid] < key) {
            return binary_S(arry, mid + 1, high, key);
        } else {
            return binary_S(arry, low, mid - 1, key);
        }
    }
    return 0;
}

int main()
{
    int j, K;
    scanf("%d %d", &j, &K);

    int arry[j];

    for (int i = 0; i < j; i++) {
        scanf("%d", &arry[i]);
    }


    int result_I = binary_Search(arry, j, K);


    int result_R = binary_S(arry, 0, j - 1, K);

    if (result_I || result_R)
        {
        printf("true \n");
    }
    else
    {
        printf("false \n");
    }

    return 0;
}
