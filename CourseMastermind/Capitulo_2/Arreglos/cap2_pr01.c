/*
Contabilizar caracteres tipo 
digitos y otros (pág 23)

Uso de los arreglos o arrays
estructura if completa y nuevas condicionales 
(pág 16-23)
*/
#include <stdio.h>

int main(){
  int c, i, nwhite, nother;

  //Definition array 
  int ndigit[10];
  nwhite = nother = 0;


  for(i = 0; i < 10; i++)
    ndigit[i] = 0;

  while((c = getchar()) != EOF){
    if(c >= '0' && c <= '9'){
      // Incrementar Array
      ++ndigit[c - '0'];
    }
    else if (c == ' ' || c == '\n' || c == '\t'){
      nwhite++;
    }
    else{
      nother++;
    }
  }

  // Impresion de pantalla
  printf("Digitos = \n ");
  for(i = 0; i < 10; i++)
      printf("%d", ndigit[i]);
  printf(", espacios en blanco = %d, otros = %d\n", nwhite, nother);

  return 0;
}