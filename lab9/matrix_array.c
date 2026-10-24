#include <stdio.h>
#define NMAX 10

void inputArray(int arr[],int n){
    int i;
    for(i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
}

void showArray2D(int matrix[][10],int n){
    int i,j;
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }
}

void constructMatrix(int P[][10],int n,int A[],int B[]){
    int i,j;
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            P[i][j] = A[i] * B[j];
        }
    }
}

int main(){
    int a[NMAX], b[NMAX], p[NMAX][NMAX], n;

    printf("Enter N = ");
    scanf("%d", &n);

    printf("Input array A\n");
    inputArray(a, n);

    printf("Input array B\n");
    inputArray(b, n);

    constructMatrix(p, n, a, b);

    printf("Matrix P\n");
    showArray2D(p, n);
}