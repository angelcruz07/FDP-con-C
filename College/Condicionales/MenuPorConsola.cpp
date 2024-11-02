#include <iostream>

using namespace std;

int main() {
  int choise;

  do {
    cout << "\t\t Menu \n";
    cout << "Menu 1 .....[1] \n";
    cout << "Menu 2 .....[2] \n";
    cout << "Menu 3 .....[3] \n";
    cout << "Salir \n";

    cout << "Elige una opcion \n";
    cin >> choise;

    switch (choise) {
    case 1:
      cout << "Ingreso la opcion 1";
      break;
    case 2:
      cout << "Presionaste la opcion 2";
      break;
    case 3:
      cout << "Presinaste la opcion 3";
      break;
    case 4:
      cout << "Saliendo";
      break;
    default:
      cout << "Opcion incorrecta \n";
    }

  } while (choise != 4);

  return 0;
}
