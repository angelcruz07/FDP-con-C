// Created by Angel on 12/11/2024.

#include <stdio.h>

#define MAXLINE 1000

char pattern[] = "es";

int myGetLine(char line[], int lim){
  int c, i;

  i = 0;

  while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
    line[i++] = c;
  if(c == '\n')
    line[i++] = c;
  line[i] = '\0';

  return i;
}

int strinIndex(char source[], char search[]){
  int i, j, k;

  for ( i = 0; source[i] != '\0'; i++) {
    for (j=i, k=0; search[k] != '\0' && source[j] == search[k]; j++, k++);
    if (k > 0 && search[k] == '\0')
      return i;
  }
  return -1;
}

int main(){
  char line[MAXLINE];
  int found = 0;

  while(myGetLine(line, MAXLINE) > 0){
    if(strinIndex(line, pattern) >= 0){
      printf("%s", line);
      found++;
      }
   return found;
  }

  return 0;
}
