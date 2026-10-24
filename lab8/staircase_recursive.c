#include <stdio.h>

int countWays(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return countWays(n - 1) + countWays(n - 2);
    }
}

int main(){
    int n;
    printf("Indicate stair steps: ");
    scanf("%d",&n);

    printf("Total climbing method: %d methods\n",countWays(n));
    return 0;
}