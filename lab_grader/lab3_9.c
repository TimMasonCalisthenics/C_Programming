#include <stdio.h>
#include <string.h>

int main(){
    char answer[20];
    char student[20];
    
    scanf("%s",&answer);
    
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%s",&student);

        int total_score = 0;

        for (int j = 0; j < 20; j++) {
            if (student[j] == answer[j]) {
                if(j < 15){
                    total_score += 1;
                }else if(j < 18){
                    total_score += 2;
                }else{
                    total_score += 3;
                }
            }
        }

        printf("std %d => %d\n",i,total_score);
    }
    
    return 0;
}