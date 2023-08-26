#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int weight;
    int profit;
    double ratio;
} Item;

int compare(const void *a, const void *b) {
    Item *itemA = (Item *)a;
    Item *itemB = (Item *)b;
    return (itemB->ratio - itemA->ratio);
}

double fractionalKnapsack(int weights[], int profits[], int numItems, int capacity) {
    Item items[numItems];

    for (int i = 0; i < numItems; i++) {
        items[i].weight = weights[i];
        items[i].profit = profits[i];
        items[i].ratio = (double)profits[i] / weights[i];
    }

    qsort(items, numItems, sizeof(Item), compare);

    double totalProfit = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < numItems; i++) {
        if (currentWeight + items[i].weight <= capacity) {
            currentWeight += items[i].weight;
            totalProfit += items[i].profit;
        } else {
            int remainingCapacity = capacity - currentWeight;
            totalProfit += items[i].ratio * remainingCapacity;
            break;
        }
    }

    return totalProfit;
}

int main() {
    int numItems;
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    int givenWeights[numItems];
    printf("Enter the weights: ");
    for (int i = 0; i < numItems; i++) {
        scanf("%d", &givenWeights[i]);
    }

    int givenProfits[numItems];
    printf("Enter the profits: ");
    for (int i = 0; i < numItems; i++) {
        scanf("%d", &givenProfits[i]);
    }

    int knapsackCapacity=20;


    double maxProfit = fractionalKnapsack(givenWeights, givenProfits, numItems, knapsackCapacity);

    printf("Maximum profit: %.1f\n", maxProfit);

    return 0;
}
