#include <stdio.h>

int main(){
    int m,n;
    int i;
    int j;

    printf("Enter M (Columns/Tables): ");
    scanf("%d", &m);
    printf("Enter N (Rows/Multipliers): ");
    scanf("%d", &n);

    printf("\n----Multiplication Table-----\n");

    //Loop แถว
    for(i = 1;i <= n;i++){
        //Loop column ของแต่ละแถว
        for(j = 1;j <= m;j++){
            printf("%d x %d = %d\t",i,j,i * j);
        }
        printf("\n");
    }
    return 0;
}