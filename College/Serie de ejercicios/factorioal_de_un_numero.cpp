#include <iostream>

using namespace std;

int calcularFactorial(int n) {
  int factorial = 1;

  for (int i = 2; i <= n; i++) {
    factorial = factorial * i;
  }

  return factorial;
}

int main() {
  int number = 0;
  int factorial = 0;

  cout << "Ingresa un numero \n";
  cin >> number;

  factorial = calcularFactorial(number);

  cout << "El factorial de " << number << " es: " << factorial;

  return 0;
}
