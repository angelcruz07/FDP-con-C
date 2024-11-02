// Generar la tabla de multipicar de un numero cualquiera
#include <iostream>

using namespace std;

int factor = 0, table = 0, product = 0;

int main() {
  cout << "Introduce un número a multiplicar \n";
  cin >> factor;

  cout << "Tabla de multiplicar de: " << factor << "\n \n";

  while (table <= 10) {
    product = factor * table;

    cout << factor << " X " << table << " = " << product << endl;

    table++;
  }

  return 0;
}
