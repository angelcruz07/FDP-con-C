//
// Created by Angel on 10/30/2024.
//
#include <iostream>
using namespace std;



int main(){
  const int num_lineas = 5;
  const char blanco=' ';
  const char asterisco='*';

  cout<<endl;

  for(int fila =1; fila <= num_lineas; fila++){
    for (int blancos = num_lineas - fila; blancos > 0; blancos--)
      cout<<blanco;

    for ( int cuenta_as = 1; cuenta_as < 2  * fila; cuenta_as++)
      cout<<asterisco;

    cout<<endl;
  }
  return 0;
}