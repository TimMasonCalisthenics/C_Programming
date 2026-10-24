#include <stdio.h>
#include <stdlib.h>

void insertionSort(int list[], int n) {
    int current, walk, temp;

    for (current = 1; current < n; current++) {
        temp = list[current];
        walk = current - 1;

        while (walk >= 0 && temp < list[walk]) {
            list[walk + 1] = list[walk];
            walk--;
        }

        list[walk + 1] = temp;
    }
}

int main() {
    int n;
    
    printf("Please enter number of digit for sorting: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("\n-----------------------------\n");
    printf("Now, you have the following sorted number:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    char filename[100];
    printf("\nPlease enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d ", arr[i]);
    }

    fclose(fp);

    printf("FILE IS ALREADY SAVED.\n");

    return 0;
}