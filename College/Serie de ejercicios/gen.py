import os

def genFile(number_files, directory):
    if not os.path.exists(directory):
        os.makedirs(directory)

    for i in range(1, number_files + 1):
      nameFile = os.path.join(directory, f"Ejercicio{i}.cpp")
      with open(nameFile, "w") as file:
            file.write(f"""\
// Created by Angel Cruz on 11/13/2024
#include <iostream>
using namespace std;                     

int main() {{
   
    return 0;
}}
""")
      print(f"Archivo generado: {nameFile}")




ruta = r"C:\Users\Angel\OneDrive\Escritorio\College\Fundamentos de programacion\FDP-con-C\College\Serie de ejercicios"


numero_de_archivos = int(input("¿Cuántos archivos .cpp deseas generar? "))
genFile(numero_de_archivos, ruta)