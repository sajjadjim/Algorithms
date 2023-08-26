#include <stdio.h>
#include <stdlib.h>
void BinPacking(int weights[], int numWeights, int binCapacity)
{
    int bins = 0;
    int remainingCapacity = binCapacity;

    for (int i = 0; i < numWeights; i++)
        {
        if (weights[i] > remainingCapacity)
        {
            bins++;
            remainingCapacity = binCapacity - weights[i];
        } else {
            remainingCapacity -= weights[i];
        }
    }

    printf("\nOutput\nMinimum no of bins : %d\n", bins);
}

int compare(const void *a, const void *b)
{
    return ((int)b - (int)a);
}

int main()
{
    int numWeights;
    printf("No of weights to be packed : ");
    scanf("%d", &numWeights);

    int givenWeights[numWeights];
    printf("Enter the weights: ");
    for (int i = 0; i < numWeights; i++)
    {
        scanf("%d", &givenWeights[i]);
    }

    int binCapacity;
    printf("Enter the bin capacity: ");
    scanf("%d", &binCapacity);

    qsort(givenWeights, numWeights, sizeof(int), compare);

    BinPacking(givenWeights, numWeights, binCapacity);

    return 0;
}
