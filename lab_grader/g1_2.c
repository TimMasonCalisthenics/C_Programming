#include <stdio.h>

int main(){
    int mid,quiz,final;
    int i,j,total;
    int remaining = 0;
        //score input + sum total score
    scanf("%d/%d/%d",&mid,&quiz,&final);
    total = mid + quiz + final;

            if(total >= 80){
                printf("A\n");
            }else if(total >= 70){
                remaining = 80 - total;
                printf("B %d\n",remaining);
            }else if(total >= 60){
                remaining = 80 - total;
                printf("C %d\n",remaining);
            }else if(total >= 50){
                remaining = 80 - total;
                printf("D %d\n",remaining);
            }else if(total < 50){
                remaining = 80 - total;
                printf("F %d\n",remaining);
            }
    

    return 0;
}