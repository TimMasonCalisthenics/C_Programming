#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    char code[50], title[100], artist[100], date[20], company[100];
    float price;
    char choice;

    printf("Welcome to CS-KMUTNB MUSIC Shop\n");
    printf("Please enter name of file: ");
    scanf("%s", filename);

    // เปิดไฟล์สำหรับเขียน
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }

    do {
        printf("\nPlease enter the product code: ");
        scanf("%s", code);

        getchar(); // เคลียร์ buffer

        printf("Please enter the product title: ");
        fgets(title, sizeof(title), stdin);

        printf("Please enter the name of artist: ");
        fgets(artist, sizeof(artist), stdin);

        printf("Please enter the issue date: ");
        fgets(date, sizeof(date), stdin);

        printf("Please enter the company: ");
        fgets(company, sizeof(company), stdin);

        printf("Please enter the price: ");
        scanf("%f", &price);

        // เขียนข้อมูลลงไฟล์
        fprintf(fp, "Code: %s\n", code);
        fprintf(fp, "Title: %s", title);
        fprintf(fp, "Artist: %s", artist);
        fprintf(fp, "Issue Date: %s", date);
        fprintf(fp, "Company: %s", company);
        fprintf(fp, "Price: %.2f\n", price);
        fprintf(fp, "-----------------------------\n");

        printf("Do you want to continue (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);

    printf("\nTHANK YOU.\n");
    printf("THE CS-KMUTNB MUSIC Shop IS CLOSING.\n");
    printf("NOW, WE ARE WRITING THE REMAINING GOODS FOR TOMORROW!\n");

    return 0;
}