#include <stdio.h>

int main(){
    int a,b,sum,product,avg;
    product = 0;
    avg = 0;

    printf("Enter A value: ");
    scanf("%d",&a);
    printf("Enter B value: ");
    scanf("%d",&b);

    sum = a + b;
    product = a * b;
    avg = sum / 2;
    printf("\n");
    printf("Sum = %d\n",sum);
    printf("Product = %d\n",product);
    printf("Average = %d\n",avg);
    return 0;
}