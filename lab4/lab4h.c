#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    int n;
    printf("Enter N value: ");
    scanf("%d",&n);

    for(i = 1;i <= n;i++){
        sum += i;
    }

    printf("Sum: %d",sum);
    return 0;
}