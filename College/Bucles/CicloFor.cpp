/* 
Presentación del bucle for 

Realice un algoritmo que calcule la 
tabla de multiplicar de un número
ingresado por el usuario utilizando
for 
*/

#include <iostream>
using namespace std;

int main() {
  int numero;

  cout << "Ingresa un numero \n";
  cin >> numero;

  for (int cont = 1; cont <= 10; cont++) {
    cout << numero * cont << endl;
  }

  return 0;
}
