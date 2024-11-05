/* 
 Realice el siguiente programa:

 Una persona aquirió un producto para pagar en 20 meses.
 el primer mes pagó $10, el segundo $20, el tercero $40
 y así sucesivamente. Realice el algoritmo para determinar cuánto
 debe pagar mensualmente y el total de lo que pagó después de los 20 meses.

 Uso del bucle While
 */

#include<iostream>

using namespace std;

int month=0, total=0, payment=0;

int main()
{
  month=1; 
  payment=10;

  while (month <= 20){
    cout<<"El pago del mes "<<month<<" es: "<<payment<<endl;

    total=total+payment;
    payment=payment*2; 

    month++;
  }

  cout<<"El total a pagar sera de: "<<total<<endl;

  return 0;
}
