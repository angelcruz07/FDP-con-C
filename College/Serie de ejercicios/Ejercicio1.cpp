// Created by Angel Cruz on 11/13/2024
/* Desarrolle un algoritmo que permita leer
dos valores distintos, determinar
cual de los dos valores es el mayor y escribirlo */

#include <iostream>
using namespace std;

int number1 = 0, number2 = 0;

void comparNumber(int number1, int number2) {

  if (number1 == number2) {
    cout << "Ningun numero es el mayor ambos son iguales";
  } else if (number1 > number2) {
    cout << number1 << ", es mayor que " << number2;

  } else {
    cout << number2 << ", es mayor que " << number1;
  }
}

void readNumbers() {
  cout << "Ingresa el primer numero: \n";
  cin >> number1;

  cout << "Ingresa el segundo numero: \n";
  cin >> number2;
}

int main() {
  readNumbers();
  comparNumber(number1, number2);

  return 0;
}
