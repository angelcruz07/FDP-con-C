/* Created by Angel Cruz on 11/13/2024

Realice un algoritmo que a partir de
proporcionarle la velocidad de un automóvil,
expresada en kilómetros por hora,
proporcione la velocidad en metros por segundo.

*/
#include <iostream>
using namespace std;    

int calculateSpeed(int km){
  int velocidadSegundos = 0;

  velocidadSegundos = (km * 1000) / 3600;
  
  return velocidadSegundos;
}

int main() {
  int km = 0;
  cout << "Ingrese la velocidad en km/h" << endl;
  cin >> km;
  
  cout << "La velocidad equivale a: " << calculateSpeed(km) << " m/s" << endl;

  return 0;
}
