#include <stdio.h>
#include <string.h>

int main() {
    int k, n;
    char answer[60];        // เฉลย
    char student[60];      // คำตอบผู้สอบ

    // รับจำนวนข้อ
    scanf("%d", &k);

    // รับเฉลย
    scanf("%s", answer);

    // รับจำนวนผู้สอบ
    scanf("%d", &n);

    // วนรับคำตอบผู้สอบแต่ละคน
    for (int i = 1; i <= n; i++) {
        scanf("%s", student);

        int score = 0;

        // ตรวจคำตอบ
        for (int j = 0; j < k; j++) {
            if (student[j] == answer[j]) {
                score++;
            }
        }

        // แสดงผล
        printf("std %d => %d\n", i, score);
    }

    return 0;
}
