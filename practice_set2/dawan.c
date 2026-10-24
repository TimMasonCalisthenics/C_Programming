#include <stdio.h>

int dawan(int n){
    if(n <= 3){
         printf("%d ",n);
         return 1;
    }else{
        printf("%d ",n);
        return dawan(n - 1) + dawan (n - 3);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    
    printf("\n%d",dawan(n));
    return 0;
}
