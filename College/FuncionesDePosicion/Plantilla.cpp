/*
Las siguientes funciones presentadas estan relacionadas
con la posicion de los elementos en la pantalla de la consola
en el sistema operativo Windows.
*/

#include<iostream>
#include<windows.h>
using namespace std;

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
}

int main()
{

	return 0;
}
