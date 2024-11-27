/* Created by Angel Cruz on 11/13/2024
Desarrolle un algoritmo que permita
leer un valor cualquiera N y escriba
si dicho número es par o impar.
*/

#include <iostream>
using namespace std;

void isEven(int n){
  if(n % 2 == 0){
    cout<<"El numero "<< n <<" es par." <<endl;
  }else {
    cout<<"El numero "<< n <<" es impar." <<endl;
  }
}

int main() {
  int n = 0 ;
  cout<<"Ingrese un numero" << endl;
  cin>>n;
  isEven(n);
   
  return 0;
}
