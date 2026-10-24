#include <stdio.h>

float calculateSaving(int n,float p0){
    if(n == 0){
        return p0;
    }else{
        return 1.05 * calculateSaving(n - 1,p0);
    }
}

int main(){
    float p0 = 10000.0;
    int year = 30;

    double result = calculateSaving(year,p0);

    printf("%d years passed\n",year);
    printf("Phakdee Account balance will be %.2f baht",result);
    return 0;
}