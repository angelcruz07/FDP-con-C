/*
 * Created by Angel on 11/3/2024.
 * Una función es el equivalente
 * a una subrutina o procedimiento
 * en otros lenguajes.  Con la definicion
 * de funciones es posible ignorar
 * como se realizar para pasar
 * a saber como se realiza (pág 26).
 *
 * Uso de las funciones y paso de parámetros (pág 26-29).
 */

#include <stdio.h>

// Prototipo
int power(int base, int n);



int main() {
 int i, result;

 for(i = 0; i<10; i++)
   printf("%d %d %d\n",i, power(2, i), power(-3, i));
}

// Estos son nuestros argumentos
int power(int base, int n) {
    int i,result;

    result=1;

    for(i = 0; i < n; i++)
        result=result*base;

    return result;
}

