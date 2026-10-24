#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a = 0,b = 1,c;
    printf("0 1");

    while(1){
        c = a + b;

        if(c > n){
            break;
        }

        printf(" %d", c);

        a = b;
        b = c;
    }
    return 0;
}