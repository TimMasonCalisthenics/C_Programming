#include <stdio.h>
#include <ctype.h>

int main(){
    char upper,lower;
    scanf("%c",&upper);

    if(isupper(upper)){
        lower = tolower(upper);
        printf("%c\n",lower);
    }else{
        printf("This is not uppercase character");
    }
    return 0;
}