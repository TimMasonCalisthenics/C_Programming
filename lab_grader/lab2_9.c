#include <stdio.h>

int main(){
    int year;
    float gpa;
    char help_check;

    scanf("%d %f %s",&year,&gpa,&help_check);
    
    //1st condition
    if(gpa >= 3.00){
        printf("approved\n");
    }else if(year >= 2 && gpa >= 2.50 && (help_check == 'Y' || help_check == 'y')){
       printf("approved\n");
    }else{
        if(gpa < 2.50){
            printf("not approved\n");
            printf("grade < 2.50\n");
        }else if(year < 2){
            printf("not approved\n");
            printf("year < 2\n");
        }else if(help_check != 'Y'){
            printf("not approved\n");
            printf("no help\n");
        }else{
            printf("not approved\n");
        }
    }
    
    return 0;
}