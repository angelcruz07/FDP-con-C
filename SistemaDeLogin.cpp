#include <iostream>
#include <string>

using namespace std;

string validUser(string user, string password) {
  string userAdmin = "admin";
  string adminPassword = "1234";

  string userStandard = "usuario";
  string userPassword = "abcd";

  string guest = "invitado";
  string guestPassword = "gues";

  if (user == userAdmin && password == adminPassword) {

    return "Usuario administrador logueado";
  } else if (user == userStandard && user == userPassword) {

    return "Usuario logueando";
  } else if (user == guest && password == guestPassword) {
    return "Invitado logueado";

  } else {

    return "Credenciales invalidad";
  }
}

int main() {
  string user, password = "";

  cout << "Inicio de sesion \n";
  cout << "Ingrese su usuario \n";
  cin >> user;

  cout << "Ingrese contrasena \n";
  cin >> password;

  string resultado = validUser(user, password);
  cout << resultado << endl;

  return 0;
}
