// Created by Angel on 11/6/2024.

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int suma = 0, promedio = 0;
float group[10];


// void fillArray() {
//  cout<< "Ingrese los datos que desea almacenar: \n";
//
//  for(int i = 0; i  < 10; i++) {
//   group[i] = 0;
//   cin>>group[i];
//  }
// }

void fillArray() {
 cout<< "Generando numeros \n";
 system("pause");

 for(int i = 0; i  < 10; i++) {
  group[i] = 5 + rand() % 5;
 }
}

void printArray() {
 cout<< "Los datos almacenados son: \n";
 for(int i = 0; i <  10; i++) {
  cout<<group[i]<<"\t";
 }
 cout<<endl;
}

void calcPromedio()
 {
  for(int i = 0; i< 10 ; i++){
   suma = suma + group[i];
  }

  promedio = suma/10;
  cout<< "El promedio de los datos es: "<< promedio;
 }

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
 srand(time(NULL));
 fillArray();
 printArray();
 calcPromedio();

 return 0;
}
