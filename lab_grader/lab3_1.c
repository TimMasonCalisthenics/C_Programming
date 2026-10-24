#include <stdio.h>

int main(){
    int r;
    scanf("%d",&r);

    int i,j;
    for(i = 0; i < r;i++){

        for(j = 0; j < i;j++){
            printf(" ");
        }
        for(j = 0; j < r - i ;j++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}