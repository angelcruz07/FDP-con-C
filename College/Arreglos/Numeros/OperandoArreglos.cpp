//
// Created by Angel on 11/8/2024.
//

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int A[10], B[10], C[10];

int fill() {
    for (int i = 0; i < 10; i++) {
        A[i] = 1 + rand() % 20;
        B[i] = 1 + rand() % 20;
    }
}

int calculate() {
    for(int i = 0; i < 10; i++) {
        C[i] = (2 * A[i]) + B[i];
    }
}

int print() {
    cout << "A \t B\t  C\n";

    for(int i = 0; i < 10; i++) {
        cout << A[i] << "\t" << B[i] << "\t" << C[i] << endl;
    }
}

int main() {
    srand(time(NULL));
    fill();
    calculate();
    print();

    return 0;
}