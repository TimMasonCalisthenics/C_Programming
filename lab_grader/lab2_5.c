#include <stdio.h>

int main(){
    int num;
    while(scanf("%d",&num) == 1 && num != -1){
        printf("%d\n",100 - num);
    }
    
    return 0;
}