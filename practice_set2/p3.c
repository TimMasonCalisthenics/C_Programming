#include <stdio.h>

struct student
{
    char name[50];
    int id;
    float gpa;
};

int main(){
    struct student students[3];
    int i;
    int maxIndex = 0;

    for(i = 0;i < 3;i++){
        scanf("%s %d %f",
                students[i].name,
                &students[i].id,
                &students[i].gpa);
    }
    
    for(i = 1;i < 3;i++){
        if(students[i].gpa > students[maxIndex].gpa){
            maxIndex = i;
        }
    }
    printf("%s (%d)",students[maxIndex].name,students[maxIndex].id);

    return 0;
}