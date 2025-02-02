// Created by Angel on 12/9/2024.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cifrado(char *texto, int  dezplazamiento){
  int i;
  char c;

  for(i = 0; texto[i] != '\0' ; i++ ){
    c = texto[i];
    if(isalpha(c)){
      char base = islower(c) ? 'a' : 'A';
      texto[i] = (c - base + dezplazamiento) % 26 + base;
      }
  }

}

int main(){
  char texto[100];
  int desplazamiento;

  printf("Introduce el texto a cifrar: ");
  fgets(texto, sizeof(texto), stdin);
  texto[strcspn(texto, "\n")] = '\0'; // Elimina el salto de línea

  printf("Introduce el valor del desplazamiento: ");
  scanf("%d", &desplazamiento);

  // Normaliza el desplazamiento para que esté en rango
  desplazamiento = desplazamiento % 26;

  cifrado(texto, desplazamiento);

  printf("Texto cifrado: %s\n", texto);

  return 0;

}
