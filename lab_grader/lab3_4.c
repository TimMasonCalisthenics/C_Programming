#include <stdio.h>
#include <math.h>

int main(){ 
    float a,r;
    int n;
    float sum = 0.0;
    scanf("%f %f %d",&a,&r,&n);

    float curr_term = a;
    for(int i = 0;i < n;i++){
        sum = sum + curr_term;
        curr_term = curr_term * r;
    }

    printf("%.3f\n",sum);

    return 0;
}