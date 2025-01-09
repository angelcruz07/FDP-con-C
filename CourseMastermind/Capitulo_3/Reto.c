// Created by Angel on 12/11/2024.
#include <stdio.h>

char separador_decimal;

void reemplazar_separador(char *cadena) {
  for (int i=0; cadena[i] != '\0'; i++) {
    if(cadena[i] == separador_decimal) {
      cadena[i] = '.';
    }
  }
}

int main(){
  char numero_texto[50];

  printf("Introduce el separador decimal que deseas usar (por ejemplo, '.' o ','): ");
  scanf(" %c", &separador_decimal);

  printf("Introduce un número utilizando '%c' como separador decimal: ", separador_decimal);
  scanf(" %s", numero_texto);

  reemplazar_separador(numero_texto);
  double numero = atof(numero_texto);

  printf("El número ingresado es: %.2f\n", numero);
  return 0;
}