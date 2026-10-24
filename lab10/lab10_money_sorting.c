#include <stdio.h>

struct money{
    int b1000;
    int b500;
    int b100;
    int b50;
    int b20;
    int b10;
    int b1;
};

struct money m;

struct money calculate(int amount){
    m.b1000 = amount/1000;
    amount %= 1000;

    m.b500 = amount/500;
    amount %= 500;

    m.b100 = amount/100;
    amount %= 100;

    m.b50 = amount/50;
    amount %= 50;

    m.b20 = amount/20;
    amount %= 20;

    m.b10 = amount/10;
    amount %= 10;

    m.b1 = amount/1;

    return m;
}

int main(){
    int amount;
    scanf("%d",&amount);

    struct money result = calculate(amount);
    printf("%d %d %d %d %d %d %d\n",
        result.b1000,
        result.b500,
        result.b100,
        result.b50,
        result.b20,
        result.b10,
        result.b1
    );
    
    return 0;
}