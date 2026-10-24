#include <stdio.h>
#include <stdbool.h>

int main(){
    int n,i,j;
    while(scanf("%d",&n) == 1 && n != -1){
        for(i = 1;i <= n;i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}