#include <stdio.h>

int power(int base,int exp){

    int result = 1;
        for(int i = 0;i < exp;++i){
            result *= base;
        }
    return result;
}

int main(){
    int base,exp;
    int pow_result;

    printf("Enter base: ");
    scanf("%d",&base);

    printf("Enter Exponent: ");
    scanf("%d",&exp);

    pow_result = power(base,exp);

    printf("%d",pow_result);
    return 0;
}