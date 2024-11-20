/* Created by Angel Cruz on 11 / 13 / 2024.
Desarrolle un algoritmo que permita
leer tres valores y almacenarlos en las variables A, B y C respectivamente. El
algoritmo debe imprimir cual es el mayor y cual es el menor. Recuerde constatar
que los tres valores introducidos por el teclado sean valores distintos.
Presente un mensaje de alerta en caso de que se detecte la introducción de
valores iguales.
*/

// Util para realizar operaciones comunes ,como búsqueda, ordenación,
// tranformación de manera eficiente y con código limpio.

#include <algorithm>
#include <iostream>

using namespace std;

int a = 0, b = 0, c = 0;

void readNumbers() {
  cout << "Ingrese el primer numero: \t";
  cin >> a;

  cout << "Ingrese el segundo numero: \t";
  cin >> b;

  cout << "Ingrese el tercer numero: \t";
  cin >> c;
}

void maxOfNumbers(int num1, int num2, int num3) {

  if (num1 == num2 || num2 == num3 || num3 == num1) {
    cout << "No es posible comparar todos los numeros por que no son valores "
            "distintos";
  } else {
    cout << "El mayor de los numeros ingresados es el: "
         << max(num1, max(num2, num3));
  }
}

int main() {
  readNumbers();
  maxOfNumbers(a, b, c);

  return 0;
}
