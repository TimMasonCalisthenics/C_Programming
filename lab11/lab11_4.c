#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char inputFile[100], outputFile[100];
    FILE *fp1, *fp2;
    char ch;
    int a=0, e=0, i=0, o=0, u=0;

    printf("Please enter file name to read: ");
    scanf("%s", inputFile);

    printf("Please enter file name to save: ");
    scanf("%s", outputFile);

    fp1 = fopen(inputFile, "r");
    if (fp1 == NULL) {
        printf("Cannot open input file!\n");
        return 1;
    }

    // นับสระ
    while ((ch = fgetc(fp1)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
    }

    fclose(fp1);

    // บันทึกผล
    fp2 = fopen(outputFile, "w");
    fprintf(fp2, "a: %d\n", a);
    fprintf(fp2, "e: %d\n", e);
    fprintf(fp2, "i: %d\n", i);
    fprintf(fp2, "o: %d\n", o);
    fprintf(fp2, "u: %d\n", u);
    fclose(fp2);

    printf("\nFILE IS ALREADY SAVED.\n");
    printf("-----------------------------\n");

    // อ่านไฟล์ผลลัพธ์มาแสดง
    fp2 = fopen(outputFile, "r");
    printf("Number of Vowels in %s are\n", inputFile);

    while ((ch = fgetc(fp2)) != EOF) {
        putchar(ch);
    }

    fclose(fp2);

    return 0;
}