#include <stdio.h>

int main()
{
    float price,total,discount;
    int qty;


    printf("Enter product price: ");
    scanf("%f", &price);
    printf("Enter product quantity: ");
    scanf("%d", &qty);

    total = price * qty;
    discount = total * 0.9;

    printf("Total price: %.2f\n",total);
    printf("Total with discount: %.2f\n",discount);

    return 0;
}