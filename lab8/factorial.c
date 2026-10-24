#include <stdio.h>

int factorial(int n){
    if(n == 1){
        printf("1");
        return 1;
    }else{
        printf("%d x ",n);
        return n * factorial(n - 1);
    }
}

int main(){
    int n;
    printf("Enter factorial: ");
    scanf("%d",&n);

    int result = factorial(n);
    printf(" = %d",result);
}