#include <stdio.h>

int main(){
    int M;
    printf("Enter menu(1-4): ");
    scanf("%d",&M);

    switch(M){
        case 1: 
            printf("Milk Tea");
            break;
        case 2:
            printf("Green Tea");
            break;
        case 3:
            printf("Lemon Tea");
            break;
        case 4:
            printf("Cocoa");
            break;
        default:
            printf("Invalid menu");
            break;
    }
    return 0;
}