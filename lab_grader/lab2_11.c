#include <stdio.h>

int main(){
    int worker_a,worker_b;
    int m,n;
    scanf("%d %d",&worker_a,&worker_b);
    scanf("%d %d",&m,&n);

    if((m > 0 && worker_a == 0) || (n > 0 && worker_b == 0)){
        printf("unable to finish order");
    }else{
        int day_bigtable = 0;
        int day_smalltable = 0;

        if(m > 0){
            int bigtable = worker_a * 6;
            day_bigtable = (m + bigtable - 1) / bigtable;
        }

        if(n > 0){
            int smalltable = worker_b * 10;
            day_smalltable = (n + smalltable - 1) / smalltable;
        }

        if(day_bigtable > day_smalltable){
            printf("%d",day_bigtable);
        }else{
            printf("%d",day_smalltable);
        }
    }
    return 0;
}