/*
Created by Angel Cruz on 11/13/2024
Desarrolle un algoritmo que funcione como caja registradora,
*/

#include <iomanip>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
using namespace std;

struct ProductInfo {
string codigo;
float precio;
};

vector<ProductInfo> productos;
float total = 0 , subTotal = 0, priceProduct = 0, IVA = 0;

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

void calculaTotalSubtotal() {
    while(true){
      string codigoProducto;
      float precioProducto;

      cout << "Ingrese el codigo del producto (presione 0 para completar compra): \n";
      cin >> codigoProducto;


      if(codigoProducto == "0"){
        break;
      }

      cout<<"Ingrese el precio del producto (presione 0 para completar compra): \n";
      cin >> precioProducto;

      if(precioProducto == 0) {
        break;
      }

      productos.push_back({codigoProducto, precioProducto});

      subTotal += precioProducto;
    }

    IVA = subTotal * .15;
    total = subTotal + IVA;

}

void imprimirRecibo() {
  SetColor(15);
  cout<<"*** Tiendas Licho *** \n";
  cout<<"Articulos comprados: \n";

  for(const auto& producto : productos) {
    cout<<"Codigo: "<< producto.codigo<< ", Precio $" <<
      fixed<< setprecision << producto.precio<< endl;
  }

  SetColor(2);
  cout << "\nSubtotal: $" << fixed << setprecision(1) << subTotal << endl;
  SetColor(2);
  cout << "IVA (15%): $" << fixed << setprecision(1) << IVA << endl;
  SetColor(2);
  cout << "Total: $" << fixed << setprecision(1) << total << endl;
}


int main() {
  calculaTotalSubtotal();
  imprimirRecibo();
  return 0;
}
