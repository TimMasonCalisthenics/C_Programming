#include <stdio.h>
#include <math.h>

float fx(float x){
    float ans;
    if (x < 0) {
        ans = (x * x) + (2 * x) + 3;
    } 
    else if (x == 0) {
        ans = 0;
    } 
    else {
        ans = x - 2;
    }
    return ans;
}

int main(){
    float x,result;
    printf("Enter X: ");
    scanf("%f",&x);

    result = fx(x);

    printf("f(%.2f) = %.2f\n",x,result);
    return 0;
}