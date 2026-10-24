#include <stdio.h>

int main(){
    int i = 3,j = 5, *p = &i, *q = &j, *r;
    double x = 2.50;

    printf("%d\n",*p);
    printf("%d\n",*q);
    r = p;
    printf("%d\n",*r);
    r = &j;
    printf("%d\n",*r);
    r = &x;
    printf("%.2lf\n",r);// illegal
    **&p;
    printf("%d\n",*p);
    return 0;
}