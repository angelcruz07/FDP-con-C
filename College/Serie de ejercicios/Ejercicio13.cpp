/* Created by Angel Cruz on 11/13/
Desarrolle un algoritmo para la empresa Constructora
Tecnovivir Casas C.A., que le permita calcular e
imprimir la nómina para su cancelación a un total
de 50 obreros calificados a quienes debe cancelar por
horas trabajadas. La hora trabajada se pautó en
30.000 Bolívares.
*/

#include <iostream>
using namespace std;

int totalObreros = 3, horasTrabajadas = 0, totalNomina = 0;
const int VALOR_HORA = 30;

void calcularSalario(){
  int salario = 0;

  while(totalObreros > 0) {
     cout<<"Ingrese el numero total de horas trabajadas por el obrero: "<<endl;
     cin>>horasTrabajadas;

     salario = horasTrabajadas * VALOR_HORA;
     totalNomina += salario;
     totalObreros--;

    }
   cout << "El total de la nomina es: " << totalNomina << endl;
  }

int main() {
   calcularSalario();
    return 0;
}
