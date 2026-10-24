#include <stdio.h>

int main(){

    int array[5];
    for(int i = 0;i < 5;i++){
        scanf("%d",&array[i]);
    }
    int size = sizeof(array) / sizeof(array[0]);
    int max = array[0];

    for(int i = 0;i < size;i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    printf("%d",max);
    return 0;
}