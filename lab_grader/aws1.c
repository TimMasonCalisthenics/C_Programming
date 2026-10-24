#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d/%d/%d/%d",&a,&b,&c,&d);

    int max_ab = (a > b) ? a:b ;

    int max_cd = (c > d) ? c:d;

    int max = (max_ab > max_cd) ? max_ab : max_cd;

    printf("%d",max);

    return 0;
}