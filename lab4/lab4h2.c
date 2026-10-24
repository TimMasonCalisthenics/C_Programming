#include <stdio.h>

int main(){
    int choice;

    for(choice = 0;choice != 3;){
        printf("+-----------------+\n");
        printf("| + - Calculator  |\n");
        printf("| 1.Plus          |\n");
        printf("| 2.Minus         |\n");
        printf("| 3.Exit          |\n");
        printf("+-----------------+\n");

        scanf("%d",&choice);
    }
    return 0;
}