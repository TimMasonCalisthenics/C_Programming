#include <stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);

    int think[100];
    int new_arr[100];
    for(int i = 0;i < n;i++){
        scanf("%d",&think[i]);
    }

    printf("a) ");
    //A print 1 - 4 member of Array
    for(int i = 0; i < 4;i++){
        printf("%d ",think[i]);
    }
    printf("\n");
    
    //B print member of array who has more value than 3rd array member
    printf("b) ");
    for(int i = 0;i < n;i++){
        if(think[i] > think[2]){
            printf("%d ",think[i]);
        }
    }
    printf("\n");

    //C Display index of array who has more value than 3rd array
    printf("c) ");
    for(int i = 0;i < n;i++){
        if(think[i] > think[2]){
            printf("%d ",i);
        }
    }
    printf("\n");
    //D Add more member from 3rd and 4th array sum
    printf("d) ");
    think[n] = think[2] + think[3];
    n++;
    for(i = 0;i < n;i++){
        printf("%d ",think[i]);
    }
    printf("\n");
    
    //E 4th array is the difference of 3 and five array
    printf("e) ");
    for(i = 0;i < n;i++){
        if(think[2] > think[4]){
            think[3] = think[2] - think[4];
        }else if(think[4] > think[3]){
            think[3] = think[4] - think[2];
        }
        printf("%d ",think[i]);
    }
    printf("\n");
    //F Array 2 or 6 who has more value?
    printf("f) ");
    if(think[1] > think[5]){
        printf("2");
    }else if(think[5] > think[1]){
        printf("6");
    }
    printf("\n");
    //G swap array 2 with last array
        int temp = think[1];
        think[1] = think[n-1];
        think[n - 1] = temp;
    printf("g) ");
    for(i = 0;i < n;i++){
        printf("%d ",think[i]);
    }
    printf("\n");
    //H copy even number to new array
    printf("h) new=[");
    int first = 1; // ตัวแปรเช็คเพื่อไม่ให้พิมพ์ช่องว่างเกินตัวแรก
    for(i = 0; i < n; i++) {
        if(think[i] % 2 == 0) {
            if(!first) printf(" "); // ถ้าไม่ใช่ตัวแรก ให้พิมพ์ช่องว่างนำหน้า
            printf("%d", think[i]);
            first = 0;
        }
    }
    printf("]\n");
    
    return 0;
}