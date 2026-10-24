#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomNumbers(int arr[], int n);
void sortArray(int arr[], int n);
void countAndPrintFrequency(int arr[], int n);

int main() {
    int n;

    printf("Enter number of elements (N): ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    generateRandomNumbers(arr, n);

    printf("\n--- Raw Data ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sortArray(arr, n);

    printf("\n--- Sorted Data ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\n--- Frequency Count ---\n");
    countAndPrintFrequency(arr, n);

    free(arr);

    return 0;
}

void generateRandomNumbers(int arr[], int n) {
    srand(time(NULL)); 
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1001;
    }
}

void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // สลับค่า
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void countAndPrintFrequency(int arr[], int n) {
    if (n == 0) return;

    int currentVal = arr[0];
    int count = 1;

    printf("%-10s %-10s\n", "Number", "Frequency");
    printf("--------------------\n");

    for (int i = 1; i < n; i++) {
        if (arr[i] == currentVal) {
            count++;
        } else {
            printf("%-10d %-10d\n", currentVal, count);
            currentVal = arr[i];
            count = 1;
        }
    }
    printf("%-10d %-10d\n", currentVal, count);
}