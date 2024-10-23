// Created by Angel on 10/23/2024.
// La pantalla de la terminal tiene 80 columnas y 25 renglones
#include<iostream>
#include<windows.h>
#include <random>
#include <conio.h>
#include <time.h>

using namespace std;

//Variables globales
int numberStars = 0;
int count = 0;
int color = 0, col=0, ren=0;


void gotoxy(int posx, int posy)
{
    HANDLE hConsoleOutput;
    COORD coord;
    hConsoleOutput = GetStdHandle (STD_OUTPUT_HANDLE);
    coord.X = posx;
    coord.Y = posy;
    SetConsoleCursorPosition (hConsoleOutput, coord);
}



void SetColor(int color)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

/* Apartir de aqui se diseñan los modulos
 * Existen dos tipos de modulos o procedimientos
 */

void read() {
    gotoxy(20, 10);
    SetColor(5);
    cout << "Ingresa el numero de estrellas que quieres dibujar \t";
    cin >> numberStars;
}

void drawStars() {
    for(count = 1; count <= numberStars; count++) {
        ren = 1 + rand() % 25;
        col = 1 + rand() % 80;
        color = 0 + rand() % 9;
        gotoxy(col, ren);
        SetColor(color);

        cout << "*";
    }
}


int main()
{
    system("cls");
    srand(time(NULL));
    read();
    system("cls");
    drawStars();

    system("pause");
    return 0;
}
