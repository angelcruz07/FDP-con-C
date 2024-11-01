/*
 * Gana a la máquina
 * Consiste en un juego de turnos. Tú contra
 * la máquina.
 * El que adivine la letra antes ganará
 * Usar RAN y SRAN para conseguir un juego aleatorio
 * Convertir numero a letras
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

char generateChar() {
  // Genera un carácter aleatorio entre 'a' y 'z'
  return 'a' + (rand() % 26);
}

int readInput() {
  int letter;

  printf("\033[32mIngresa una una letra\033[0m\n");
  letter = getchar();
  while (getchar() != '\n')
    system("clear");

  return letter;
}
void printVictoryMessage() {
  printf("\033[32m"); // Cambia el color del texto a verde

  printf("  __     ______  _    _   _      ____   _    _ \n");
  printf(" \\ \\   / / __ \\| |  | | | |    / __ \\ | |  | |\n");
  printf("  \\ \\_/ / |  | | |  | | | |   | |  | || |  | |\n");
  printf("   \\   /| |  | | |  | | | |   | |  | || |  | |\n");
  printf("    | | | |__| | |__| | | |___| |__| || |__| |\n");
  printf("    |_|  \\____/ \\____/  |______\\____/  \\____/ \n");

  printf("\033[0m \n\n");
  printf("¡Felicidades! Has ganado la partida.\n");
}

void game(int letterUser, int letterMachine) {
  int letterGuess = generateChar();
  int win = FALSE;

  while (win == FALSE) {
    printf("La letra de la máquina es: %c\n", letterMachine);
    if (letterUser == letterGuess) {
      printVictoryMessage();
      win = TRUE;

    } else if (letterMachine == letterGuess) {
      printf("\033[31mHas perdido la maquina a adivinado antes\033[0m\n");
      win = TRUE;

    } else {
      printf("Nadie acertó, el juego continúa.\n");
      letterMachine = generateChar();
      letterUser = readInput();
    }
  }
}

void printMenu() {
  printf("\033[34m------ GANA A LA MAQUINA ------\033[0m\n");
  printf("\033[32m");
  printf("Juega contra la máquina adivinando cualquier letra desde la a-z.\n");
  printf("Si adivinas correctamente, ¡habrás ganado!\n");
  printf("\033[0m");
  printf(
      "\033[33mPresiona cualquier tecla para iniciar la partida...\033[0m\n");
  getchar();

  system("clear");
}

int main() {
  srand(time(NULL));

  printMenu();
  int letterUser = readInput();
  int letterMachine = generateChar();

  game(letterUser, letterMachine);
  return 0;
}
