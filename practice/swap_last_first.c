#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseRecursive(int *left,int *right){
    if(left >= right){
        return;
    }else{
        swap(left,right);
        reverseRecursive(left + 1,right - 1);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseRecursive(&arr[0],&arr[n - 1]);
    printf("Reversed Array: ");
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}