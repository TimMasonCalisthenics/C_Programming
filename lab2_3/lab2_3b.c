#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char check_student[10];

    printf("How old are you: ");
    scanf("%d",&age);

    if(age < 12){
        printf("Child\n");
    }else if(age >= 12){
        printf("Are you student?(Yes or No): ");
        scanf("%s",check_student);
        if (strcmp(check_student, "Yes") == 0 || strcmp(check_student, "yes") == 0) {
            printf("Teen student\n");
        } else if (strcmp(check_student, "No") == 0 || strcmp(check_student, "no") == 0) {
            printf("Teen other\n");
        }
    }

    return 0;
}