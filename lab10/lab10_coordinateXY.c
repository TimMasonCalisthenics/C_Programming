#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} POINT;

int getQuadrant(int x, int y) {
    if (x > 0 && y > 0) return 1;
    if (x < 0 && y > 0) return 2;
    if (x < 0 && y < 0) return 3;
    if (x > 0 && y < 0) return 4;
    return 0; 
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    POINT p[100];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", getQuadrant(p[i].x, p[i].y));
    }

    double totalDist = 0;
    for (int i = 0; i < n - 1; i++) {
        double d = sqrt(pow(p[i].x - p[i+1].x, 2) + pow(p[i].y - p[i+1].y, 2));
        totalDist += d;
    }
    
    printf("%.2f\n", totalDist);

    return 0;
}