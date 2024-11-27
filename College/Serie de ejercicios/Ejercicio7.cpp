/*Created by Angel Cruz on 11/13/2024
Desarrolle un algoritmo que permita convertir
calificaciones numéricas, según la siguiente tabla:
A = 19 y 20, B =16, 17 y 18, C = 13, 14 y 15,
D = 10, 11 y 12, E = 1 hasta el 9.
Se asume que la nota está
comprendida entre 1 y 20.
*/

#include <iostream>
using namespace std;

void convertirNota(){
  int  nota = 0;
  cout<<"Ingrese una nota: \t";
  cin>>nota;

    if (nota >= 19 && nota <= 20){
      cout<<"Calificacion A";
    }
    else if (nota >= 16 && nota <= 18) {
      cout<<"Calificacion B";
    }
    else if (nota >=13 && nota <= 15 ) {
      cout << "Calificacion C";
    }
    else if (nota >= 10 && nota <= 12){
      cout<<"Calificacion D";
    }
    else if (nota >= 1 && nota <= 9) {
      cout<<"Calificacion E";
    }
    else {
      cout<<"Opcion invalida";
    }

}

int main() {
  convertirNota();
  return 0;
}
