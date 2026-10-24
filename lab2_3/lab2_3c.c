#include <stdio.h>

int main(){
    int age,pressure;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter blood pressure: ");
    scanf("%d",&pressure);

    if(age > 60 && pressure > 140){
        printf("Risk group");
    }else{
        printf("Normal group");
    }
    return 0;
}