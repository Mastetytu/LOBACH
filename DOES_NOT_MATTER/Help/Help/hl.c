#include <iostream>
#include <cmath>
#include <cstdlib>
#include <istream>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>


#define NOT_KEY 67
#define KEY_EXIT 27
#define KEY_ENTER 13
#define KEY_ARROW_RIGHT 77
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80

int main() {
    COORD position = { 0,0 }; //позиция x и y
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = ' ';

        }
    }
    switch (getch())
    {
    case 77:
        position = (COORD){ 1, 0 };
        a[1][0] = '1';
        break;
    default:
        break;
    }
    
}