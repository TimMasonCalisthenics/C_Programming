#include <stdio.h>
#include <windows.h>

COORD coord = {0,0};

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    char filename[20];
    int ch;   // เปลี่ยนเป็น int
    int i;


    for (i = 1; i <= 7; i++) {

        system("cls");

        sprintf(filename, "File%03d.txt", i);

        FILE *fp = fopen(filename, "r");

        if (fp == NULL) {
            printf("Could not open %s\n", filename);
            Sleep(1000);
            continue;
        }

        int x = 5, y = 2;
        gotoxy(x, y);

        int code;

        while (fscanf(fp, "%d", &code) == 1) {
        if (code == 10) {   // 10 คือ \n
            y++;
            gotoxy(x, y);
        } else {
            putchar((char)code);
        }
}

        fclose(fp);

        gotoxy(0, y + 2);
        printf("--- This is the image from %s ---", filename);
        printf("\nPress Enter to see the next file...");
        getchar();
    }

    return 0;
}
