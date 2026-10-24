#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    int count = 0;

    do{
        scanf("%d",&n);

        if(n != 0){
            sum = sum + n;
            count++;
        }
    }while(n != 0);

    printf("Sum of all Number in array: %d\n",sum);
    printf("Total input: %d\n",count);
    return 0;
}