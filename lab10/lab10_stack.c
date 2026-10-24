#include <stdio.h>
#define N 100

int stack[N];
int top = -1;

void push(int data) {
    if (top == N - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = data;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    int data = stack[top];
    top--;
    return data;
}

int main() {
    char op;
    int value;

    while (1) {
        printf("Please select operation: ");
        scanf(" %c", &op);

        if (op == 'P' || op == 'p') {
            printf("Please input data: ");
            scanf("%d", &value);
            push(value);
        }
        else if (op == 'X' || op == 'x') {
            int result = pop();
            if (result != -1)
                printf("Data is : %d\n", result);
        }
        else {
            break; 
        }
    }

    return 0;
}
