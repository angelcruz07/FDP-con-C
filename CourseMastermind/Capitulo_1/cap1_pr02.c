// Convertir grados celcius a farenheit
#include <stdio.h>

int main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = -10;
  upper = 50;
  step = 10;

  celsius = lower;

  while (celsius <= upper) {
    fahr = (celsius * 9 / 5) + 32;

    printf("%d\t%d\n", celsius, fahr);

    celsius = celsius + step;
  }

  return 0;
}
