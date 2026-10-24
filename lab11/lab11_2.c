#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Product {
    int code;
    char name[16];  
    float price;
    int quantity;
};

int main() {
    struct Product p[MAX];
    int count = 0;
    FILE *fp;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }

    // อ่านข้อมูลจากไฟล์
    while (fscanf(fp, "%d %s %f %d",
                  &p[count].code,
                  p[count].name,
                  &p[count].price,
                  &p[count].quantity) != EOF) {
        count++;
    }

    fclose(fp);

    printf("Welcome to KMUTNB Shop\n");
    printf("The list of product:\n");

    for (int i = 0; i < count; i++) {
        printf("%d  %s  %.1f  %d\n",
               p[i].code,
               p[i].name,
               p[i].price,
               p[i].quantity);
    }

    int searchCode;
    printf("Please enter the product code: ");
    scanf("%d", &searchCode);

    int found = -1;

    for (int i = 0; i < count; i++) {
        if (p[i].code == searchCode) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Product not found!\n");
        return 0;
    }

    int buy;
    printf("You have chosen %s with Price %.2f\n",
           p[found].name,
           p[found].price);

    printf("How many? ");
    scanf("%d", &buy);

    if (buy > p[found].quantity) {
        printf("Not enough stock!\n");
        return 0;
    }

    float total = buy * p[found].price;
    printf("Your total price is %.0f\n", total);

    // ตัด stock
    p[found].quantity -= buy;

    // เขียนข้อมูลใหม่กลับลงไฟล์
    fp = fopen("input.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d %s %.1f %d\n",
                p[i].code,
                p[i].name,
                p[i].price,
                p[i].quantity);
    }

    fclose(fp);

    return 0;
}