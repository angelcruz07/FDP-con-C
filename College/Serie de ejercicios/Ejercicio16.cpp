/* Created by Angel Cruz on 11/13/2024
Determine el resultado del siguiente diagrama de
flujo, realice el pseudocódigo. Elabore su enunciado.
*/

#include <iostream>
using namespace std;

int BC = 0, BV = 0, BD = 0, BC2 = 0, BM = 0, C = 0, Resto = 0;

void Calculo() {
    cout << "Ingrese un numero mayor o igual a 1,000: ";
    cin >> C;

    if (C < 1000) {
        cout << "El numero ingresado debe ser mayor o igual a 1,000." << endl;
        return;
    }

    Resto = C; // Inicializamos el resto con el valor ingresado

    while (Resto >= 50000) {
        BC++;
        Resto -= 50000;
    }
    while (Resto >= 20000) {
        BV++;
        Resto -= 20000;
    }
    while (Resto >= 10000) {
        BD++;
        Resto -= 10000;
    }
    while (Resto >= 5000) {
        BC2++;
        Resto -= 5000;
    }
    while (Resto >= 1000) {
        BM++;
        Resto -= 1000;
    }

    // Resultados
    cout << "Resultados:" << endl;
    cout << "BC (>= 50,000): " << BC << endl;
    cout << "BV (>= 20,000): " << BV << endl;
    cout << "BD (>= 10,000): " << BD << endl;
    cout << "BC2 (>= 5,000): " << BC2 << endl;
    cout << "BM (>= 1,000): " << BM << endl;
    cout << "Resto: " << Resto << endl;
}

int main() {
    Calculo();
    return 0;
}
