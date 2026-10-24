#include <stdio.h>

int isPrime(int x) {
    if (x <= 1) return 0;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;   // ไม่ใช่จำนวนเฉพาะ
    }
    return 1;           // เป็นจำนวนเฉพาะ
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);

        if (isPrime(x))
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
