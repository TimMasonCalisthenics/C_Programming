#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

/* ===== gotoxy ===== */
COORD coord = {0, 0};

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

/* ===== Clear screen ===== */
void clrscr()
{
    system("cls");
}

/* ===== Convert degree to radian ===== */
double rad(double z)
{
    double ans;
    ans = z * M_PI / 180;
    return ans;
}

/* ===== SINE function ===== */
double SINE(double u, double z)
{
    double C = 10;   // ขยายกราฟให้เห็นชัด
    return sin(rad(z * u)) * C;
}

/* ===== Main ===== */
int main()
{
    int x;
    int centerX = 40;   // กึ่งกลางจอแนวนอน
    int centerY = 15;   // กึ่งกลางจอแนวตั้ง

    double y;

    clrscr();

    /* วาดแกน X */
    for (x = 0; x <= 80; x++)
    {
        gotoxy(x, centerY);
        printf("-");
    }

    /* วาดแกน Y */
    for (x = 0; x <= 30; x++)
    {
        gotoxy(centerX, x);
        printf("|");
    }

    /* วาดกราฟ sin */
    for (x = -36; x <= 36; x++)
    {
        y = SINE(5, x);   // y = sin(x*5/90)

        int plotX = centerX + x;
        int plotY = centerY - (int)y;

        gotoxy(plotX, plotY);
        printf("*");
    }

    gotoxy(0, 31);
    return 0;
}
