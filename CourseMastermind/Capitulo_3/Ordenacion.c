// Created by Angel on 12/10/2024.
#include <stdio.h>
void sellshort(int v[], int n) {
  int gap, i, j, temp;

  for(gap = n/2; gap > 0; gap/=2)
    for(i=gap; i<n; i++)
      for(j=i-gap; (j>=0) && (v[j]>v[j+gap]); j-=gap) {
        temp= v[j];
        v[j] = v[j+gap];
        v[j+gap] = temp;
      }
}

int main() {
  int list[] ={3,1,45,6,3,21,90,8,70,12};
  sellshort(list, 9);

  for(int i=0; i<9; i++) printf("%d ", list[i]);
  return 0;
}

