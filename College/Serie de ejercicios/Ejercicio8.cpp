/* Created by Angel Cruz on 11/13/2024
Desarrolle un algoritmo que permita leer dos
números y ordenarlos de menor a mayor
*/

#include <iostream>

using namespace std;

void orderNumebers(float num1, float num2){
  if(num1 < num2){
    cout<< num1  <<", "<<  num2;
  }
  else {
    cout<< num2 << ", " << num1;
  }
}

int main() {
  float num1 = 0, num2 = 0;
  cout<<"Ingrese un numero: ";
  cin>>num1;
  cout<<"Ingrese un numero: ";
  cin>>num2;
  orderNumebers(num1, num2);
   
  return 0;
}
