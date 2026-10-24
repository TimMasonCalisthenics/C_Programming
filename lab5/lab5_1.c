#include <stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);

    int num_arr[n];
    for(i = 0;i < n;i++){
        scanf("%d",&num_arr[i]);
    }

    for(i = 0; i < n;i++){
        printf("%d ",num_arr[i]);
    }
    printf("\n");
    return 0;
}
