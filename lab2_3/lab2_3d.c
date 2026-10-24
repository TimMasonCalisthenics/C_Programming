#include <stdio.h>

int main(){
    int score;
    printf("Enter score: ");
    scanf("%d",&score);

    if(score > 80){
        printf("High");
    }else if(score >= 50){
        printf("Medium");
    }else{
        printf("Low");
    }
    return 0;
}