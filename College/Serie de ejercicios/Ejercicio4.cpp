/* Created by Angel Cruz on 11/13/2024
Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes
de sus dos catetos.
Desarrolle el algoritmo correspondiente */

#include <iostream>
#include <cmath>

using namespace std;

float lado1 = 0, lado2 = 0 ;

int calcularHipotenusa(float a, float b){
   float hipotenusa = 0;

    hipotenusa  = sqrt(pow(a, 2) + pow(b, 2));

    return hipotenusa;
}

void readSides(){
  cout << "Ingrese el lado a del trinangulo: \n";
  cin >> lado1;
  cout << "Ingrese el lado b del trinangulo: \n";
  cin >> lado2;
}

int main() {
  readSides();
  cout<<"La hipotenusa del triangulo es: "<<calcularHipotenusa(lado1, lado2);

  return 0;
}
