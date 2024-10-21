#include <iostream>
using namespace std;

int main() {
  int cont = 1, num;

  cout << "Ingresa un número";
  cin >> num;

  do {
    cout << num * cont << endl;
    cont++;
  } while (cont <= 10);

  return 0;
}
