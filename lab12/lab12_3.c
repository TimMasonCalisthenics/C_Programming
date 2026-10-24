#include <stdio.h>

int main() {
    FILE *rf = fopen("Test2.txt", "r");
    FILE *wf = fopen("Result3.txt", "w");

    if (rf == NULL) return 1;

    fseek(rf, 0, SEEK_END);
    long size = ftell(rf);

    for (long i = size - 1; i >= 0; i--) {
        fseek(rf, i, SEEK_SET);
        char ch = fgetc(rf);
        printf("%c", ch);
        fputc(ch, wf);
    }

    fclose(rf);
    fclose(wf);
    return 0;
}