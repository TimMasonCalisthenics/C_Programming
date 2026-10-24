#include <stdio.h>

int main(){
    int score[100];
    int n;
    int i;
    int sum = 0;
    int count = 0;
    int avg = 0;
    int pass = 0;

    do{
        printf("Enter student score: ");
        scanf("%d",&n);

        if(n != 0){
            score[count] = n;
            sum = sum + n;
            count++;
        }
    }while(n != 0);

    if(count > 0){
        avg = sum / count;
    }

    for(i = 0; i < count;i++){
        if(score[i] > avg){
            pass++;
        }
    }

    printf("----------------------\n");
    printf("Total Score: %d\n",sum);
    printf("Average score: %d\n",avg);
    printf("Student who got more than average: %d Students\n",pass);
    return 0;
}