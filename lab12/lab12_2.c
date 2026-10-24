#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *rf = fopen("5ways.txt", "r");
    int words = 0, sentences = 0, specials = 0;
    char ch, prev = ' ';

    if (rf == NULL) return 1;

    while ((ch = fgetc(rf)) != EOF) {
        // นับจำนวนคำ (เมื่อเจอช่องว่างหลังตัวอักษร)
        if (isspace(ch) && !isspace(prev)) words++;
        
        // นับประโยค (เช็คจุด . ! ?)
        if (ch == '.' || ch == '!' || ch == '?') sentences++;
        
        // นับอักขระพิเศษ (ไม่ใช่ตัวอักษร ไม่ใช่ตัวเลข และไม่ใช่ช่องว่าง)
        if (!isalnum(ch) && !isspace(ch)) specials++;
        
        prev = ch;
    }
    
    FILE *wf = fopen("Result2.txt", "w");
    fprintf(wf, "Words: %d\nSentences: %d\nSpecials: %d", words, sentences, specials);
    
    fclose(rf);
    fclose(wf);
    return 0;
}