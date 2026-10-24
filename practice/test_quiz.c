#include <stdio.h>

int main(){
    int n;
    printf("Input: ");
    scanf("%d", &n);

    // 1. เช็คขอบเขตที่ "ผิด" ก่อน
    if (n < 0 || n > 100) { 
        printf("Error\n");
    } 
    // 2. ถ้าหลุดมาถึงตรงนี้ แสดงว่าเลขอยู่ในช่วง 0-100 แน่นอน ค่อยเช็คเกรด
    else if (n >= 80) {
        printf("Output: A\n");
    } 
    else if (n >= 50) {
        printf("Output: P\n");
    } 
    else { // เหลือแค่กรณีเดียวคือ 0-49 (เพราะ <0 ดักไปแล้ว)
        printf("Output: F\n");
    }

    return 0;
}