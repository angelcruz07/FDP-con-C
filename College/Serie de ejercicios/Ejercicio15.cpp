/*  Created by Angel Cruz on 11/13/2024
Desarrolle un algoritmo que permita determinar
a partir de un número de días, ingresado por pantalla, ¿Cuántos
años, meses, semanas y días; constituyen
el número de días proporcionado utilizando la estructura Mientras o
While.
 */

#include <iostream>
using namespace std;

int cantidad_dias = 0, cantidad_anos = 0, cantidad_meses = 0, cantidad_semanas = 0;

void mostrarDias() {
  cout<<"Ingrese una cantidad de dias"<<endl;
  cin>>cantidad_dias;

  while(cantidad_dias > 365){
    cantidad_anos++;
    cantidad_dias-= 365;
  }
  while(cantidad_dias > 30){
    cantidad_meses++;
    cantidad_dias-= 30;
  }
  while(cantidad_dias > 7){
    cantidad_semanas++;
    cantidad_dias-= 7;
  }

  cout<<"En "<<cantidad_dias<<" dias. Hay "
  <<cantidad_anos<<" anos "<<cantidad_meses<<" meses "
  <<cantidad_semanas<<" semanas "<<cantidad_dias<<" dias."<<endl;
}

int main() {
   mostrarDias();
    return 0;
}
