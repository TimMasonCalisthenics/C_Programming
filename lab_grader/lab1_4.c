#include <stdio.h>



int main(){
    int s;
    scanf("%d",&s);

    int h = s / 3600;
    int m = (s % 3600) / 60;
    int second = (s % 3600) % 60;

    printf("%d %d %d",h,m,second);

    return 0;
}