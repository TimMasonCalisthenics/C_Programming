#include <stdio.h>

int main(){
     int n;
    char str[20][100];   // เก็บ argument
    char result[1000];  // เก็บผลลัพธ์

    char *p;
    char *r = result;

    int i, j;
    int maxLen = 0;

    // รับจำนวน argument
    scanf("%d", &n);
    getchar(); // กิน \n

    // รับ string แต่ละตัว
    for (i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);

        // ลบ \n
        p = str[i];
        while (*p != '\0') {
            if (*p == '\n') {
                *p = '\0';
                break;
            }
            p++;
        }
    }

    // หา string ที่ยาวที่สุด
    for (i = 0; i < n; i++) {
        int len = 0;
        p = str[i];

        while (*p != '\0') {
            len++;
            p++;
        }

        if (len > maxLen)
            maxLen = len;
    }

    // เรียงแบบแนวตั้ง
    for (j = 0; j < maxLen; j++) {
        for (i = 0; i < n; i++) {
            p = str[i] + j;

            if (*p != '\0') {
                *r = *p;
                r++;
            }
        }
    }

    *r = '\0'; // ปิด string

    // แสดงผล
    printf("%s\n", result);
    return 0;
}