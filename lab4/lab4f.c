#include <stdio.h>

int main(){
    int i;
    int sum = 0;
    scanf("%d",&i);

    while(i <= 10){
        sum = sum + i;
        i++;
    }
    printf("%d",sum);
    return 0;
}