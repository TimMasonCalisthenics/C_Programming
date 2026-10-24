#include <stdio.h>

int main()
{
    int a,b;
    float avg;
    avg = 0;

    printf("Enter A and B value: ");
    scanf("%d %d",&a,&b);

    avg = a + b / 2;
    printf("Average = %.2f\n",avg);
    return 0;

}