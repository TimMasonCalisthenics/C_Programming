#include <stdio.h>

int main() {
    int h, m;

    while (scanf("%d %d", &h, &m) == 2 && (h != 0 || m != 0)) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < m; j++) {
                printf("*"); 
            }
            printf("\n"); 
        }
    }

    return 0;
}
