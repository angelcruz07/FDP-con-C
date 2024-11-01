/*
 * Capitulo 1. Variables, Expresiones, Iteraciones y Decisiones
 *
 * Contar Caracteres
 */

#include <stdio.h>

int main() {
  long nc;

  nc = 0;

  while (getchar() != EOF)
    nc++;

  printf("%ld\n", nc);
}
