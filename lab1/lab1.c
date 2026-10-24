#include <stdio.h>

int main(){
    int age;
    float weight,height;
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d",&age);

    printf("Enter your weight(kg) and height(cm): ");
    scanf("%f %f",&weight,&height);

    printf("Name: %s Age: %d Weight: %.2f Height: %.2f\n",name,age,weight,height);

    return 0;
}
