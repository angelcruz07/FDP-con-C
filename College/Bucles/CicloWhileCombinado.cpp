/*
Bucle do while y while combinado

Presentación de  ambos bucles para
entender la diferencia entre ellos.

*/

#include <iostream>
using namespace std;

int main() {
  int var = 10;

  while (var != 10) {
    cout << "Entro al while" << endl;
  }
  do {
    cout << "Entro al ciclo do while" << endl;
  } while (var != 10);

  return 0;
}
