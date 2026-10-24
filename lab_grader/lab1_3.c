#include <stdio.h>

int main(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    float avg = 0;
    avg = (a + b + c) / 3;

    printf("%.3f\n",avg);
    return 0;
}