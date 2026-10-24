#include <stdio.h>
#include <math.h>


int main(){
    float r;
    float p = 3.14159;
    
    scanf("%f",&r);
    
    float area = p * pow(r,2.0);
    
    printf("%.2f\n",area);

    return 0;
}