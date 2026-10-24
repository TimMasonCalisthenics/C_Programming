#include <stdio.h>

int main(){
    int score,sum = 0,count = 0, passCount = 0;
    float avg = 0;

    while(1){
        printf("Enter score(0 to stop): ");
        scanf("%d",&score);

        if(score == 0){
            break;
        }

        sum += score;
        count++;

        if(score >= 50){
            passCount++;
        }
    }
    if(count > 0){
            avg = (float)sum/ count;
    }

    printf("Sum: %d\n",sum);
    printf("Count = %d\n",count);
    printf("Avg: %.2f\n",avg);
    printf("Score more than 50: %d\n",passCount);
    return 0;
}