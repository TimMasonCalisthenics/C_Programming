#include <stdio.h>

int main() {
    int r, c;
    int a[105][105] = {0};

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            a[i][c] += a[i][j];   // sum แถว
            a[r][j] += a[i][j];   // sum คอลัมน์
            a[r][c] += a[i][j];   // sum ทั้งหมด
        }
    }

    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
