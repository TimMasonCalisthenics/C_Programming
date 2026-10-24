<<<<<<< HEAD
#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of elements N: ");
    scanf("%d", &N);
    int arr[N]; // Variable length array
    printf("Enter %d integers:\n", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are:\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
=======
#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of elements N: ");
    scanf("%d", &N);
    int arr[N]; // Variable length array
    printf("Enter %d integers:\n", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are:\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
>>>>>>> e83d74939e781b3de81db1e5e23aed4d12e62000
}