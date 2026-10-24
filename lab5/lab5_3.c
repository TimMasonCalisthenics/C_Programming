#include <stdio.h>

int main(){
    int n,i;
    int count = 0;
    printf("Enter students amount: ");
    scanf("%d",&n);
    int score[n];
    for(i = 0;i < n;i++){
        printf("Enter score for student no. %d.:",i+1);
        scanf("%d",&score[i]);
    }

    printf("Result\n");
    for(i = 0;i < n;i++){
        if(score[i] >= 50){
            printf("No. %d passed with %d score\n",i + 1,score[i]);

            count++;
        }
    }

    printf("Total passed: %d students",count);

    return 0;
}