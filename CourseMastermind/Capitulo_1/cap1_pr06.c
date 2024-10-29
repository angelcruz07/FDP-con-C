/*
C libro de Kernighan & Ritchie

Capitulo 1.  Variables, Expresiones, Iteraciones y decisiones

Herramientas: getchar, putchar
*/

#include <stdio.h>

int main() {
  int c;
  c = getchar();

  /* Uso recomendado de este bucle por que no conocemos el final de la
   instrucción
   ¿Que significa EOF?
    End of file / ctrl + c */

  while (c != EOF) {
    putchar(c);
    // printf("%c", c);
    c = getchar();
  }
}
