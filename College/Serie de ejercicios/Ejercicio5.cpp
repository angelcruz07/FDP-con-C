/* Created by Angel Cruz on 11/13/2024
Desarrolle un algoritmo que permita determinar
el área y volumen de un cilindro dado su radio (R) y
altura (H).
*/

#include <iostream>
#include <cmath>

using namespace std;

// Definir un tipo de dato personalidado
struct Cilindro {
    float areaTotal;
    float volume;
};

Cilindro calculateVolumeAndArea(float radius, float heigth){
  //Declaramos la variable del tipo Cilindro
  Cilindro resultados;

  float areaBase = M_PI * pow(radius, 2);
  float areaLateral = 2 * M_PI * radius * heigth;

  resultados.areaTotal = areaLateral + 2 * areaBase;
  resultados.volume = areaBase * heigth;

  return resultados;
}

void readInputs(float &radius, float &heigth){
    cout<<"Ingrese la altura del cilindro"<<endl;
    cin>>radius;
    cout<<"Ingrese el radio del cilindro"<<endl;
    cin>>heigth;
}


int main() {
  float radius = 0 , heigth = 0;

  readInputs(radius, heigth);

    // Calcular el área y el volumen
   Cilindro resultados = calculateVolumeAndArea(radius, heigth);

   // Mostrar los resultados
   cout << "Area total del cilindro: " << resultados.areaTotal << endl;
   cout << "Volumen del cilindro: " << resultados.volume << endl;

  return 0;
}
