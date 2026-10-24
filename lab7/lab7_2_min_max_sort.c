#include <stdio.h>

int findMin(int data[],int max){
    int i;
    int MIN = 1000;   

    for (i = 0; i < max; i++) {

        if (MIN > data[i]) {
            MIN = data[i];
        }
    }
    return MIN;
}

int findMax(int data[],int max){
    int i;
    int MAX = 0;

    for (i = 0; i < max; i++) {

        if (MAX < data[i]) {
            MAX = data[i];
        }
    }

    return MAX;
}

int sorting(int data[],int max){
    int i,j,x;
    for(i = 0;i < max - 1;i++){
        for(j = i + 1; j < max;j++){
            if(data[j] < data[i]){
                x = data[i];
                data[i] = data[j];
                data[j] = x;
            }
            
        }
    }
    return x;
}

int main(){
    int data[10] = {5,2,6,10,22,44,1,3,5,7};
    
    sorting(data,10);
    for(int i = 0;i < 10;i++){
        printf("%d ",data[i]);
    }
    int min = findMin(data,10);
    int max = findMax(data,10);
    printf("\nMin: %d\n",min);
    printf("Max: %d\n",max);

    return 0;
}