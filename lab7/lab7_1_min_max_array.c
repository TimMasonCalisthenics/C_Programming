#include <stdio.h>

int maxArray(int A[],int n);
int minArray(int A[],int n);
int sumArray(int A[],int n);

int maxArray(int A[],int n){
    int max = A[0];
    for(int i = 1;i < n;i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    return max;
}

int minArray(int A[],int n){
    int min = A[0];
    for(int i = 1;i < n;i++){
        if(A[i] < min){
            min = A[i];
        }
    }
    return min;
}

int sumArray(int A[],int n){
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += A[i];
    }

    return sum;
}

int main(){

    int A[] = {10, 25, 5, 40, 15};
    int n = 5;

    printf("Min = %d\n", minArray(A, n));
    printf("Max = %d\n", maxArray(A, n));
    printf("Sum = %d\n", sumArray(A, n));
    return 0;
}