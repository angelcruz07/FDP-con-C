#include <iostream>
using namespace std;

int temperature = 0;
int celsius = 0;

int main() {
  cout << "Ingresa la temperatura actual \n";
  cin >> temperature;

  celsius = (temperature - 32) * 5 / 9;

  cout << "La temperatura ingresada en grados celsius es: " << celsius << endl;

  return 0;
}
