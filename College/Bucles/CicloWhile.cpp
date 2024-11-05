/*
Presentación de bucle while 

Realice un algoritmo que calcule 
la tabla de múltiplicar de un número
ingresado por el usuario.
*/

#include <iostream>
using namespace std;

int main() {
  int cont = 1, num;
  cout << "Introduce un número \n";
  cin >> num;

  while (cont <= 10) {
    cout << num * cont << endl;
    cont++;
  }

  return 0;
}
