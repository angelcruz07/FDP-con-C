// Created by Angel on 11/13/2024.
#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int matrix1[100][100];
int matrix2[100][100];
int matrix3[100][100];

int col = 0,  ren = 0;

void readMatrix() {
    cout<<"Ingresa cuantas columnas quieres en la matriz \n";
    cin >> col;

    cout << "Ingresa cuantos renglones quieres en la matriz \n";
    cin >> ren;
}


void storeMatrix(int matrix[100][100]) {
    cout<<"Llenando la matriz..."<<endl;
    for( int r = 1; r <= ren; r++) {
        for(int c = 1; c <= col; c++) {
            matrix[r][c] = rand() % 100;
        }
    }

}

void printMatrix(int matrix[100][100]) {
    for(int r = 1; r <= ren; r++) {
        for(int c = 1; c <= col; c++) {
            cout<<matrix[r][c]<<"\t";
        }
        cout<<endl;
    }
}

void printDiagonal(int matrix[100][100]) {
    cout << "Diagonal de la matriz:";
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

void sumMatrix(int matrix1[100][100], int matrix2[100][100]) {

    for(int r = 1; r <= ren; r++) {
        for (int c = 0; c <= col; c++) {
            matrix3[r][c] = matrix1[r][c] + matrix2[r][c];
        }
    }
}

void findNumbers(int matrix[100][100]) {
    int c1 = 0;
    int c2 = 0;

    for( int r = 1; r < ren; r++){ 
        for(int c = 1; c < col; c++) {
            if(matrix[r][c] >= 10 && matrix[r][c] <= 20) {
                c1++;
            }
            if(matrix[r][c] >= 20 || matrix[r][c] <= 50) {
                c2++;
            }
        }
    }
    cout<<"Cuantos numeros mayores a 10 y menores a 20: "<< c1++ <<endl;
    cout<<"Cuantos numeros mayores a 20 y menores a 50: "<<c2++ <<endl;
}

int main() {
    srand(time(NULL));

    readMatrix();
    storeMatrix(matrix1);
    storeMatrix(matrix2);

    cout<<"Matriz 1: \n";
    printMatrix(matrix1);

    cout<<"Matriz 2: \n";
    printMatrix(matrix2);

    cout<<"Diagonal matriz 1: \n";
    printDiagonal(matrix1);
    cout<<"Diagonal matriz 2: \n";
    printDiagonal(matrix2);

    sumMatrix(matrix1, matrix2);

    cout<<"Matriz 3: \n";
    printMatrix(matrix3);

    cout<<"Numeros entre 10 y 20, menores de 50 y mayores de 30 de la matriz 3: \n";
    findNumbers(matrix3);

    return 0;
}