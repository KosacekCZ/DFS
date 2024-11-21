#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>

void bogo_sort(int *arr, int size) {
    bool sorted = false;
    int step = 0;

    while (!sorted) {
        if (size > 1)
        {
            size_t i;
            for (i = 0; i < size - 1; i++)
            {
                size_t j = i + rand() / (RAND_MAX / (size - i) + 1);
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
        printf("Step: %d\n", step);
        step++;
        for (int i = 0; i < size; i++) {
            printf("%d, ", arr[i]);
        }
        printf("\n");

        for (int i = 1; i < size; i++) {

            if (!(arr[i - 1] < arr[i])) {
                sorted = false;
                break;
            }
            sorted = true;
        }

    }

}

void bougus_sort(int *arr, int size) {
    int temp[size];
    bool swapped[size];
    int i = 0;

    while (i < size) {
        printf("Itteration: %d\n", i);
        int random_selected = rand() % size;

        if (!swapped[random_selected]) {
            temp[i] = arr[random_selected];
            swapped[random_selected] = true;
            i++;
        }
    }

    for (int j = 0; j < size; j++) {
        arr[j] = temp[j];
    }
}

void counting_sort(int *arr, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0) max = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // return Array with indexes representing numbers
    int * cum = calloc(0, (max + 1) * sizeof(int));

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] == i) {
                cum[i]++;
            }
        }
    }

    for (int i = 0; i < max; i++) {
        printf("%d, ", cum[i]);
    }
    printf("\n");

    free(cum);
}

int max(int * arr, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0)max = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

