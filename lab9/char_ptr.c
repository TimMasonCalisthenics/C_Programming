#include <stdio.h>

int main(){
    char str[200];
    char *p;
    int count = 0;

    fgets(str, sizeof(str),stdin);

    p = str;
    while(*p != '\0' && *p != '\n'){
        if(*p >= '0' && *p <= '9'){
            count++;
        }
        p++;
    }

    p--;
    while(p >= str){
        printf("%c",*p);
        p--;
    }

    printf("\n");

    printf("%d\n",count);
    return 0;
}