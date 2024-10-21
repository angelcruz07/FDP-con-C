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
