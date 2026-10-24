#include <stdio.h>

void swap(int *addr1, int *addr2){
    int temp = *addr1;
    *addr1 = *addr2;
    *addr2 = temp;
}

int main(){
    int n;
    scanf("%d",&n);

    int matrix[4][4];
    int i ,j;
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int *ptr = &matrix[0][0];
    for (i = 0; i < n; i++) {
        swap(
            (ptr + i*n + i),
            (ptr + i*n + (n-1-i))
        );
    }
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            printf("%d ",*(ptr + i*n + j));
        }
        printf("\n");
    }
    return 0;
}