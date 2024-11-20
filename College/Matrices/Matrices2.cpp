// Created by Angel on 11/13/2024.

#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int matrix[100][100];
int col = 0,  ren = 0;

void readMatrix() {
    cout<<"Ingresa cuantas colums quieres en la matriz \n";
    cin >> col;

    cout << "Ingresa cuants renglones quieres en la matriz \n";
    cin >> ren;
}


void storeMatrix() {
    cout<<"Llenando la matriz..."<<endl;
    system("pause");

    for( int r = 1; r <= ren; r++) {
        for(int c = 1; c <= col; c++) {
            matrix[r][c] = rand() % 100;
        }
    }
}

void printMatrix() {
    for(int r = 1; r <= ren; r++) {
        for(int c = 1; c <= col; c++) {
            cout<<matrix[r][c]<<"\t";
        }
        cout<<endl;
    }
}

void printDiagonal() {
    cout << "Diagonal de la matriz: ";
    if(ren == col) {
        for(int i = 1; i <= col; i++) {
            cout << matrix[i][i] << ", ";
        }
        cout << endl;
    }
    else {
        cout<<"No es posible imprimir la matriz, ya no es cuadratica \n";
    }
}

int main() {
    srand(time(NULL));

    readMatrix();
    storeMatrix();
    printMatrix();
    printDiagonal();

    return 0;
}