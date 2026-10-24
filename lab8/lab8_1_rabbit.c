#include <stdio.h>

int rabbitBorn(int n){
    if(n <= 2){
        return 1;
    }else{
        return rabbitBorn(n - 1) + rabbitBorn(n - 2);
    }
}

int main(){
    int months;
    printf("Input months: ");
    scanf("%d", &months);
    printf("Output: %d\n", rabbitBorn(months));
    return 0;
}