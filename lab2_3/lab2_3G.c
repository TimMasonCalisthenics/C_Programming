#include <stdio.h>
#include <string.h>

int main()
{
    int drink,qty,boba,price,total;
    char boba_check[5];
    boba = 20;
    printf("Timmy Tea instruction\n");
    printf("+-------------------+\n");
    printf("| 1. Select Drink   |\n");
    printf("| 2. Enter Quantity |\n");
    printf("| 3. Add boba       |\n");
    printf("| 4. Sweetness Lvl  |\n");
    printf("+-------------------+\n");

    printf("Select drink(1-2): ");
    scanf("%d",&drink);
    switch(drink){
        case 1:
            printf("Milk Tea\n");
            price = 40;
            printf("Enter Quantity: ");
            scanf("%d",&qty);
            printf("Add boba?: ");
            scanf("%s",boba_check);
            if(strcmp(boba_check ,"Yes") == 0 || strcmp(boba_check ,"yes") == 0){
                price = price + boba;
                total = price * qty;
                printf("%d Milk Tea %d baht",qty,total);
            }else if(strcmp(boba_check ,"No") == 0 || strcmp(boba_check ,"no") == 0){
                total = price * qty;
                printf("%d Milk Tea %d baht",qty,total);
            }
            break;
        case 2:
            printf("Green Tea\n");
            price = 45;
            printf("Enter Quantity: ");
            scanf("%d",&qty);
            printf("Add boba?: ");
            scanf("%s",boba_check);
            if(strcmp(boba_check ,"Yes") == 0 || strcmp(boba_check ,"yes") == 0){
                price = price + boba;
                total = price * qty;
                printf("%d Green Tea %d baht",qty,total);
            }else if(strcmp(boba_check ,"No") == 0 || strcmp(boba_check ,"no") == 0){
                total = price * qty;
                printf("%d Green Tea %d baht",qty,total);
            }
            break;
        default:
            printf("No more menu");
            break;
    }
    return 0;
}