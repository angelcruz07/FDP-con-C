#include <iostream> 
#include <string.h>
//Libreria  scring



using namespace std;

// Rol Admin
char user_admin[20] = "admin";
char password_admin[20] = "1234";

// Rol user 
char standart_user[20] = "usuario";
char standart_user_password[20] = "abcd";

// Rol guest

char guest[20] = "invitado";
char guest_password[20] = "guest";

char user[20] = "";
char password[20] = "";


int main()
{
  cout<<"***Inicio de sesion*** \n";
  cout<<"Ingresa tu usuario \n"; 
  cin>>user;

  cout<<"Ingresa tu contreseña \n";
  cin>>password;

 if(strcmp(user, user_admin) == 0 && strcmp(password, password_admin) == 0)
  {
    cout<<"Bienvenido administrador:"<<user_admin;
  }
  else if (strcmp(user, standart_user) == 0 && strcmp(password, standart_user_password) == 0){
  	cout<<"Bienvenido usuario: "<<standart_user;
  }
  else if(strcmp(user, guest) == 0 && strcmp(password, guest_password) == 0 ){
  	cout<<"Bienvenido invitado: " <<guest;
  }
  else{
    cout<<"Acceso denegado, credenciales invalidas";
  }
  
  return 0;
}
