/* Created by Angel Cruz on 11/13/2024
Desarrolle un algoritmo que permita calcular 
Promedio de Notas; finaliza cuando N = 0
*/
#include <iostream>
using namespace std;

int calcularPromedio(){
float sumNotas = 0, nota = 0, promedio = 0;
int contadorNotas = 0;

while(true){
   cout<<"Ingresa un nota que deseas: (presione 0 para salir) "<<endl;
   cin>>nota;
     if (nota == 0) {
            break;
     }

     sumNotas += nota;
     contadorNotas++;
}
  promedio = sumNotas / contadorNotas;
  cout << "El promedio de las notas es: " << promedio << endl;

}


int main() {
   calcularPromedio();
    return 0;
}
