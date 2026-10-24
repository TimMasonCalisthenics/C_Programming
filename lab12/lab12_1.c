#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *rf = fopen("5most.txt", "r");
    FILE *wf = fopen("Result1.txt", "w");
    char ch;

    if (rf == NULL) return 1;

    while ((ch = fgetc(rf)) != EOF) {
        char upper = toupper(ch);
        printf("%c", upper);
        fputc(upper, wf);
    }

    fclose(rf);
    fclose(wf);
    return 0;
}