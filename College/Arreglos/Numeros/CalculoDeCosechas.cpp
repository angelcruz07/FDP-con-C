//
// Created by Angel on 11/8/2024.
//

#include <iostream>
#include <time.h>
#include <iomanip>

//Procesamiento de kronke

using namespace std;

float toneladasPorMes[12];
float promedio = 0;
int  mesSuperior= 0 , mesInferior = 0;

void llenarCosechas() {
    for(int i = 0; i < 12; i++) {
        toneladasPorMes[i]=1000 + rand() % 4000;
    }
}

void calcularPromedioCosecha() {
    cout<<"Calculando el promedio de las cosechas.... \n";

    for (int i = 0; i < 12; i++) {
        promedio += toneladasPorMes[i];
    }
    promedio = promedio/12;
}

void cosechaInferiorSuperior() {
    for(int i = 0; i < 12; i++) {
        if(toneladasPorMes[i] < promedio) {
            mesInferior ++;
        }

        if(toneladasPorMes[i] > promedio) {
            mesSuperior ++;
        }
    }
}

void printDatos() {
    cout << "+---------+------------------+\n";
    cout << "|   Mes   | Toneladas por Mes |\n";
    cout << "+---------+------------------+\n";

    for (int i = 0; i < 12; i++) {
        cout << "| " << setw(7) << (i + 1) << " | " << setw(15) << toneladasPorMes[i] << " |\n";
    }

    cout << "+---------+-----------------+\n";

    cout << "Promedio de cosechas:\n" << promedio << endl;
    cout << "Meses con cosecha inferior al promedio: " << mesInferior << endl;
    cout << "Meses con cosecha superior al promedio: " << mesSuperior << endl;

}

int main () {
    srand(time(NULL));
    llenarCosechas();
    calcularPromedioCosecha();
    cosechaInferiorSuperior();
    printDatos();
    return 0;
}