/* Created by Angel Cruz on 11/13/2024
Desarrolle un algoritmo que realice la sumatoria de los números enteros
comprendidos entre el 1 y el 10, es decir, 1 + 2 + 3 + …. + 10
 */

#include <iostream>

using namespace std;

int start = 0, endValue = 0;

int accumulateSum(int start, int end) {
  int sum = 0;

  for (int i = start; i <= end; i++) {
    sum += i;
  }

  return sum;
}

void calculateEvenOddNumbers(int start, int end) {
  int countEven = 0;
  int countOdd = 0;

  for (int i = start; i <= end; i++) {
    cout << i << ", ";

    if (i % 2 == 0) {
      countEven++;
    } else {
      countOdd++;
    }
  }

  cout << endl;
  cout << "Cantidad de numeros impares: " << countOdd << endl;
  cout << "Cantidad de numeros pares: " << countEven << endl;
}

void readRange() {
  cout << "Ingresa en valor inicial de la suma: ";
  cin >> start;

  cout << "Ingresa el valor final de la suma: ";
  cin >> endValue;
}

int main() {
  readRange();

  cout << "La suma susesiva del rango de " << start << " a " << endValue
       << " es: " << accumulateSum(start, endValue) << endl;

  calculateEvenOddNumbers(start, endValue);

  return 0;
}
