#include <iostream>
using namespace std;

int num1 = 0;
int num2 = 0;
int result = 0;

int main() {
  cout << "Ingresa un numero \n";
  cin >> num1;
  cout << "Ingresa otro numero \n";
  cin >> num2;

  result = num1 + num2;

  cout << "El resultado de la suma es: \t" << result;

  return 0;
}
