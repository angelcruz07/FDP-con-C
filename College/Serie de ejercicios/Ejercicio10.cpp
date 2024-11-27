/* Created by Angel Cruz on 11/13/2024
Realice un algoritmo que calcule el
monto a pagar por el servicio de estacionamiento,
teniendo en cuenta que por la
primera hora de estadía se tiene una tarifa de
1000 bolívares y las restantes tienen un costo
de 600 bolívares.
Se tiene como datos: hora de entrada, hora de salida
(formato militar), iniciada una hora se contabiliza como
hora total
 */

#include <iostream>
#include <cmath>
using namespace std;

int horaEntrada=0, horaSalida=0, minutoEntrada=0, minutoSalida=0;

void calcularMontoDePago(int horaEntrada, int horaSalida) {

    int minutosEntrada = horaEntrada * 60 + minutoEntrada;
    int minutosSalida = horaSalida * 60 + minutoSalida;

    //Calcular si duro mas de un dia
    if (minutosSalida < minutosEntrada) {
        minutosSalida += 24 * 60;
    }

    int duracionMinutos = minutosSalida - minutosEntrada;

    int horasTotales = ceil(duracionMinutos / 60.0);

    int monto = 0;

    if (horasTotales <= 1) {
        monto = 1000;
    } else {
        monto = 1000 + (horasTotales - 1) * 600;
    }

    cout << "Monto a pagar: " << monto << " bolivares." << endl;

}

void readData() {
    cout<< "Hora de entrada: (formato militar, ej: 14 para 2:00 PM): ";
    cin >> horaEntrada;

    cout << "Ingrese los minutos de entrada: ";
    cin >> minutoEntrada;

    cout << "Hora de salida: (formato militar, ej: 14 para 2:00 PM):";
    cin >> horaSalida;

    cout << "Ingrese los minutos de salida: ";
    cin >> minutoSalida;
}

int main() {
   readData();
    calcularMontoDePago(horaEntrada, horaSalida);
   
    return 0;
}
