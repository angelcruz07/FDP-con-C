//
// Created by Angel on 11/13/2024.
//
#include <iostream>
using namespace std;

int matrix[3][3];

void storeMatrix() {
    cout<<"Matriz"<<endl;
    for( int ren = 1; ren <= 3; ren++) {
        for(int col = 1; col <= 3; col++) {
            cout << "Ingrese un numero: "<< ren << ", "<< col<< ": \n";
            cin >> matrix[ren][col];
        }
    }
}

void printMatrix() {
    for(int ren = 1; ren <= 3; ren++) {
        for(int col = 1; col <=3; col++) {
            cout<<matrix[ren][col]<<"\t";
        }
        cout<<endl;
    }
}

void printDiagonal() {
    cout << "Diagonal de la matriz: ";
    for(int i = 1; i <= 3; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
}

int main() {
    storeMatrix();
    printMatrix();
    printDiagonal();
    return 0;
}