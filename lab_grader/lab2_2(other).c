#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Reading input in the format: integer operator integer
    if (scanf("%d %c %d", &a, &op, &b) != 3) {
        return 1; // Exit if input is invalid
    }

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                // Type casting to float to ensure decimal division
                float result = (float)a / b;
                
                // Check if the result is an integer or needs decimals
                if (a % b == 0) {
                    printf("%d\n", (int)result);
                } else {
                    printf("%.2f\n", result);
                }
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}