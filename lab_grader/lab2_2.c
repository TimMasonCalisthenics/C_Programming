#include <stdio.h>

int main(){
    int a,b;
    char operator;
    scanf("%d %c %d",&a,&operator,&b);

    if(operator == '+'){
        printf("%d\n",a + b);
    }else if(operator == '-'){
        printf("%d\n",a - b);
    }else if(operator == '*'){
        printf("%d\n",a * b);
    }else if(operator == '/'){
        if(b != 0){
            float result = (float)a/b;

            if(a % b == 0){
                printf("%d\n",(int)result);
            }else{
                printf("%.2f\n",result);
            }
        }
    }

    return 0;
}