/* 
Presentación el bucle Do While

Realice un algoritmo que muestre la tabla de 
multiplicar de 1 al 10 por el número ingresado
del usuario.
*/

#include <iostream>
using namespace std;

int main() {
  int cont = 1, num;

  cout << "Ingresa un número";
  cin >> num;

  do {
    cout << num * cont << endl;
    cont++;
  } while (cont <= 10);

  return 0;
}
