/*
 * Capitulo 1. Variables expresiones, iteraciones y decisiones
 *
 *  Contar palabras,  if else, define
 * */

#include <stdio.h>

// Uso de define se refiera a una constante dentro del programa
#define IN 1  // Esta dentro de la palabra
#define OUT 0 // Esta fuera de la palabra

int main() {
  int c = 0, nl = 0, nw = 0, nc = 0, state = 0;

  state = OUT;

  while ((c = getchar()) != EOF) {
    nc++;

    if (c == '\n') {
      nl++;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      nw++;
      state = IN;
    }
  }

  printf("Number lines: %d \n Numero de palabras: %d \n  Numero de caracteres "
         "%d \n",
         nl, nw, nc);

  return 0;
}
