//
// Created by Angel on 1/9/2025.
//
#include <stdio.h>

void swap(int v[], int i, int n) {
    int temp;
    temp = v[i];
    v[i] = v[n];
    v[n] = temp;
}

void quicksort(int v[], int left, int right) {
    int i, last;

    if (left >= right) return;
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (v[i] < v[left])
            swap(v, ++last, i);
    }
    swap(v, left, last);
    quicksort(v, left, last - 1);
    quicksort(v, last + 1, right);
}

int main() {
    int ordenar[] = {1, 3, 6, 7, 3, 2, 7, 8, 9};

    quicksort(ordenar, 0, 8);
    for (int i = 0; i < 9; i++)
        printf("%d, ", ordenar[i]);

    return 0;
}