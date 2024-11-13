// Created by Angel on 11/13/2024.
#include "iostream";
using namespace std;


//Variable global
int matrix[3][3];

void storeMatrix() {
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


int main() {
    storeMatrix();
    printMatrix();
    return 0;
}