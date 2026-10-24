#include <stdio.h>

int main(){
    int m,n;
    int arr[11][11];
    scanf("%d %d",&m,&n);

    
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            int sum = 0;
            printf("%d ",arr[i][j] + 1);
        }
        printf("\n");
    }

    return 0;
}