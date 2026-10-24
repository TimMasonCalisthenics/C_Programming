#include <stdio.h>

int main(){
    int h;
    printf("Enter height: ");
    scanf("%d",&h);

    if(h > 175){
        printf("you're tall\n");
    }else if(h > 165){
        printf("you're quite tall\n");
    }else if(h > 155){
        printf("you're quite short\n");
    }else{
        printf("you're short\n");
    }   

    return 0;
}