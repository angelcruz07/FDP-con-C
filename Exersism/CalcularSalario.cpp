/*
 * Un profesor tiene un salario inicial de $1500, y recibe un incremento de 10%
 * anual durante 6 años. ¿Cual es su salario al cabo de 6 años?
 * ¿Que salario ha recibido en cada uno de los 6 años?
 */

#include <iostream>

using namespace std;

int year = 0, salary = 0, increase = 0;

int main() {
  salary = 1500;
  year = 1;

  cout << "El " << year << " año de trabajo su sueldo será: " << salary << endl;

  while (year <= 5) {
    increase = (salary * 10) / 100;
    salary += increase;
    year++;

    cout << "El " << year << " año de trabajo su sueldo será: " << salary
         << endl;
  }

  return 0;
}
