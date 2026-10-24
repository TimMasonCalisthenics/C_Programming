#include <stdio.h>

int main(){
    int n,i;

    scanf("%d",&n);

    int num_arr[n];

    for(i = 0; i < n;i++){
        scanf("%d",&num_arr[i]);
    }

    for(i = n - 1; i >= 0;i --){
        printf("%d", num_arr[i]);

        if(i > 0){
            printf(" ");
        }
    }

    return 0;
}