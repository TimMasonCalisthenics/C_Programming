#include <stdio.h>

int main(){
    float weight,height;

    scanf("%f %f",&weight,&height);

    float bmi = 0;
    bmi = weight / (height * height);

    if(bmi < 18.5){
        printf("underweight\n");
    }else if(bmi >= 18.5 && bmi < 24.0){
        printf("normal weight\n");
    }else if(bmi >= 25.00 && bmi <= 29.9){
        printf("overweight\n");
    }else if(bmi >= 30.00){
        printf("obese\n");
    }

    return 0;
}