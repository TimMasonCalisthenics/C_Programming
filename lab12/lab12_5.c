#include <stdio.h>
#include <windows.h>

COORD coord = {0,0};

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    system("cls");
    system("COLOR 1F"); // พื้นหลังน้ำเงิน ตัวอักษรขาว

    gotoxy(20,5);
    printf("ASCII ART DEMO");

    gotoxy(10,10);
    printf("  *****  ");
    gotoxy(10,11);
    printf(" *     * ");
    gotoxy(10,12);
    printf("  *****  ");

    return 0;
}