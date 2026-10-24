#include <stdio.h>

int main(){
    float temp;
    printf("Enter temp: ");
    scanf("%f",&temp);

    if(temp >= 37.5){
        printf("High Temperature\n");
    }else{
        printf("Low Temperature\n");
    }
    return 0;
}