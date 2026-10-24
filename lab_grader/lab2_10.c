#include <stdio.h>

int main(){
    char num_char[10][10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    while(scanf("%d",&n) != EOF){
        int hundred = n / 100;
        int tens = (n / 10) % 10;
        int units = n % 10;

        printf("%s %s %s\n",num_char[hundred],num_char[tens],num_char[units]);
    }
    
    return 0;
}