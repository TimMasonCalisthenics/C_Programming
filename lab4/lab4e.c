#include <stdio.h>

int main(){
    int i,n,menu,result;
    printf("+-----------------+\n");
    printf("| + - Calculator  |\n");
    printf("| 1.Plus          |\n");
    printf("| 2.Minus         |\n");
    printf("| 3.Exit          |\n");
    printf("+-----------------+\n");

    result = 0;
    do{
        printf("Enter Menu: ");
        scanf("%d",&menu);

        switch(menu){
            case 1:
                printf("Enter n,i value: ");
                scanf("%d %d",&n,&i);
                result = n + i;
                printf("Result: %d\n",result);
                break;
            case 2:
                printf("Enter n,i value: ");
                scanf("%d %d",&n,&i);
                result = n - i;
                printf("Result: %d\n",result);
                break;
            default:
                break;
        }
    }while(menu != 3);
    return 0;
}