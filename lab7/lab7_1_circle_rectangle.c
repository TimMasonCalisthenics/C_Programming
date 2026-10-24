#include <stdio.h>
#include <math.h>

float rectangle(float width,float height){
    float result = width * height;

    return result;
}

float circle(float radius){
    float pi = 3.14159;
    float area = pi * pow(radius,2);

    return area;
}

int main(){
    int n;
    printf("============ MENU ============\n");
    printf("1.Calculate area of rectangle\n");
    printf("2.Calculate area of circle\n");

    printf("Please enter 1 or 2: ");
    scanf("%d",&n);

    float width,height;
    float radius;

    if(n == 1){
        printf("Please enter width: ");
        scanf("%f",&width);
        printf("Please enter height: ");
        scanf("%f",&height);

        float rectangle_area = rectangle(width,height);
        printf("Area of rectangle = %.2f",rectangle_area);
    }else if(n == 2){
        printf("Please enter radius: ");
        scanf("%f",&radius);
        float area_circle = circle(radius);
        printf("Area of Circle = %.2f",area_circle);
    }else{
        printf("None of these choice\n");
    }
    return 0;
}