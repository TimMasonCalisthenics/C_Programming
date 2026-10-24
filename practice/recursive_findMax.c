#include <stdio.h>

int findMax(int *ptr,int size){
    if(size == 1){
        return *ptr;
    }
    int max = findMax(ptr + 1,size - 1);
    if(*ptr > max){
        return *ptr;
    }else{
        return max;
    }
     
}

int main(){
    int arr[] = {15,42,7,89,23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxVal = findMax(arr,n);
    printf("Max value in Array is: %d\n",maxVal);
    return 0;
}