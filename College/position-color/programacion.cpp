#include<iostream>
#include<windows.h>
#include<conio.h>

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
  gotoxy(34, 13);
  SetColor(10);
  cout<<"Programacion \n";
  gotoxy(50,24);
  cout<<"PRESIONE UNA TECLA PARA CONTINUAR";
  getch();
  system("pause");
  system("cls");
  SetColor(5);
  cout<<"ESTAMOS EN OTRA PANTALLA";
  gotoxy(50, 24);
  

	return 0;
}
