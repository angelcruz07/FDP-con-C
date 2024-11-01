/*
 * Capitulo 1. Variables, Expresiones, Iteraciones y Decisiones
 * Contar Lineas sentencia if
 */

#include <stdio.h>

int main() {
  int c, n1;

  n1 = 0;
  c = 0;

  while ((c = getchar()) != EOF) {

    if (c == '\n') {
      n1++;
    }
  }

  printf("%d\n", n1);
}
