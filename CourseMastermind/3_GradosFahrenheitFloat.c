// Programa de conversion de grados farenheit a celsius
#include <stdio.h>

// Definición de variables
float fahr, celsius;
int lower, upper, step;

int main() {
  // Inicialización de variables
  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  // Bucle mientras
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);

    printf("%3.0f\t%6.1f\n", fahr, celsius);

    fahr = fahr + step;
  }

  return 0;
}
