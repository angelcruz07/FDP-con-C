#include "libreriacarac.h"
#include <ctype.h>
#include <stdio.h>

int atof(char s[]) {
  double val, power;
  int i, sing; // Indice del arreglo de caracteres

  for (i = 0; isspace(s[i]); i++) // Elimina los espacio
    ;

  sing = (s[i] == '-') ? -1 : 1; // Signo negativo
  if (s[i] == '+' || s[i] == '-')
    i++;

  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');

  if (s[i] == '.')
    i++;

  for (power = 0.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  }

  return sing * val / power;
}

int main() {
  char line[MAXLINE];
  int found = 0;

  while (myGetLine(line, MAXLINE) > 0) {
    printf("\t %6.3f\n", 10.0 + atof(line));
  }

  return 0;
}
