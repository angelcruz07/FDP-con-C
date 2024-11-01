
/*
 * Capitulo 1. Variables, Expresiones, Iteraciones y Decisiones
 * Contar Lineas sentencia if
 */

#include <stdio.h>

int main() {
  int character;

  int numberLines = 0, numberTabs = 0, numberSpaces = 0;

  while ((character = getchar()) != EOF) {

    if (character == ' ') {
      numberSpaces++;
    } else if (character == '\n') {
      numberLines++;
    } else if (character == '\t') {
      numberTabs++;
    }
  }

  printf("Numero de espacios: %d \n Numero tabulaciones %d\n Numero de lineas "
         "%d\n",
         numberSpaces, numberTabs, numberLines);
}
