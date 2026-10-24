#include <stdio.h>
#include <math.h>

int main(){
    float x = 0;
    x = ceil( -fabs( -8 + floor( -5.5 ) ) );

    printf("%.2f",x);
    return 0;
}