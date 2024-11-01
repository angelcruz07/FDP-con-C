//
// Created by Angel on 10/30/2024.
//
#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    char elCar;

    cout<<"¿Cuantas filas?";
    cin>>filas;
    cout << "¿Cuantas columnas?";
    cin >> columnas;

    cout << "¿Que caracter";
    cin >> elCar;

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas;  j++)
            cout << elCar;
        cout << endl;
    }
    return 0;
}