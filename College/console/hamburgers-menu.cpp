// Created by Angel on 10/24/2024.
#include <conio.h>
#include <iostream>
#include <windows.h>
#include <cctype>

using namespace std;

//Contants
const double priceSimple = 20.0, priceDouble = 25.0, priceTriple = 28.0;

//Variables
char hamburger;
int quantitySimples = 0, quantityDoubles = 0, quantityTriples = 0;
double total = 0.0, charge = 0.0, totalWithCharge = 0.0;

// Functions positions
void gotoxy(const int posX, const int posY)
{
    HANDLE hConsoleOutput;
    COORD coord;
    hConsoleOutput = GetStdHandle (STD_OUTPUT_HANDLE);
    coord.X = posX;
    coord.Y = posY;
    SetConsoleCursorPosition (hConsoleOutput, coord);
}

void SetColor(const int color)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
        wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

void printMenu() {
    gotoxy(35, 0);
    SetColor(3);
    cout << "*----- El naufrago satisfecho -----* \n";
    SetColor(5);
    gotoxy(35, 3);
    cout << "|-------------- MENU -------------| \n";
    gotoxy(35, 4);
    cout << "|  Hamburguesa sencilla  (S)      | \n";
    gotoxy(35, 5);
    cout << "|  Hamburguesas dobles   (D)      | \n";
    gotoxy(35, 6);
    cout << "|  Hamburguesar tripes   (T)      | \n";
    gotoxy(35, 7);
    cout << "|  Salir                 (E)      | \n";
    gotoxy(35, 8);
    cout << "|---------------------------------| \n";
}


//Modules
void order(char choiseSelected) {
    int quantity;

    switch(choiseSelected) {
        case 's':
            cout << "Has seleccionado hamburguesa sencilla \n";
            cout << "Cuantas hamburguesas sencillas deseas? : ";
            cin >> quantity;
            quantitySimples += quantity;
        break;
        case 'd':
            cout << "Has seleccionado hamburguesa doble \n";
            cout << "Cuantas hamburguesas dobles deseas? : ";
            cin >> quantity;
            quantityDoubles += quantity;
        break;
        case 't':
            cout << "Has seleccionado hamburguesa triple \n";
            cout << "Cuantas hamburguesas triples deseas? : ";
            cin >> quantity;
            quantityTriples += quantity;
        break;
        default:
            SetColor(4);
            cout << "Opcion invalidaa" << endl;
    }
}

void readMenu() {
    gotoxy(30, 10);
    SetColor(2);
    cout << "Para elegir una hamburguesa pulse la letra asignada (X)";
    cin >> hamburger;

    hamburger = tolower(hamburger);

    while(hamburger != 'p') {
        order(hamburger);

        cout << "Deseas alguna hamburguesa mas? (S)encilla, (D)oble, (T)riple, (P para proceder al pago) ";
        cin >> hamburger;
        hamburger = tolower(hamburger);
    }
}

void payment() {
    char CardPayment;

    total = (quantitySimples * priceSimple) +  (quantityDoubles * priceDouble)  + (quantityTriples * priceTriple);
    cout << "Deseas pagar con tarjeta ? (S/N): " << endl;
    cin >> CardPayment;
    CardPayment = tolower(CardPayment);

    if (CardPayment == 's') {
        charge =  total * 0.05;
        cout << "Cargo por targeta: $" << charge << endl;
        cout << "Total a pagar: $" << total + charge << endl;
    }else {
        cout << "Total a pagar: $" << total << endl;
    }
}



void login (){
    //Variables de usuario
    string user1 = "angel";
    string password1 = "1234";
    string user = "";
    string password = "";

    while(true) {
        system("cls");
        gotoxy(35, 8);
        SetColor(1);
        cout << "----------- Inicio de sesion ---------- \n";

        gotoxy(35, 10);
        cout << "Ingrese su usuario \t";

        cin >> user;

        gotoxy(35, 11);
        cout << "Ingrese su Contrasena \t";
        cin >> password;

        if(user1 == user && password1 == password) {
            SetColor(2);
            cout << "Contrasena valida acceso permitido ...";
            system("cls");
            break;
        }else {
            SetColor(4);
            cout << "Contrasena invalida intente de nuevo";
            Sleep(1000);
        }
    }
}

void welcome(){
    gotoxy(34,0);
    SetColor(2);
    cout<<"El naufrago satisfecho";
    gotoxy(34,5);
    cout << "         /\\\n";
    gotoxy(34,6);
    cout << " |\\    /  \\    /|\n";
    gotoxy(34,7);
    cout << " | \\   \\  /   / |\n";
    gotoxy(34,8);
    cout << " |  |  \\  /  |  |\n";
    gotoxy(34,9);
    cout << "  \\  \\ \\  / /  /\n";
    gotoxy(34,10);
    cout << "|\\__\\ \\\\  // /__/|\n";
    gotoxy(34,11);
    cout << " \\___--    --___/\n";
    gotoxy(34,12);
    cout << "     /_/||\\_\\\n";
    gotoxy(34,13);
    cout << "        ||\n";
    system("pause");
    system("cls");
}

int main() {
    login();
    welcome();
    printMenu();
    readMenu();
    payment();
    return 0;
}