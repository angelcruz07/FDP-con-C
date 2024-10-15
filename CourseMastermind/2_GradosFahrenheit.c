// Programa de conversion de grados farenheit a celsius
#include <stdio.h>

// Definición de variables
int fahr, celsius;
int lower, upper, step;

int main() {
  // Inicialización de variables
  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  // Bucle mientras
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;

    printf("%d\t%d\n", fahr, celsius);

    fahr = fahr + step;
  }

  return 0;
}
