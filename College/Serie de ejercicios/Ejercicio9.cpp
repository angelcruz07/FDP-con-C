/*
Created by Angel Cruz on 11/13/2024
Desarrolle un algoritmo que permita
leer un valor entero positivo N y determinar si es primo o no
*/

#include <iostream>
using namespace std;

void isPrime(int numero){
  if (numero <= 1) {
    cout << numero << " no es primo." << endl;
    return;
  }

  for (int i = 2; i <= numero / 2; i++) {
    if (numero % i == 0) {
      cout << numero << " no es primo." << endl;
      return;
    }
  }

  cout << numero << " es primo." << endl;
}

int main() {
  int n = 0;
  cout << "Ingrese un numero: " << endl;
  cin >> n;

  isPrime(n);

  return 0;
}
