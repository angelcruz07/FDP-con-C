cmake_minimum_required(VERSION 3.23)
project(FDP_con_C)
set(CMAKE_CXX_STANDARD 17)

add_executable(hamburgers College/console/hamburgers-menu.cpp)

add_executable(CicloFor College/console/CicloFor.cpp
        College/proyecto.cpp)

add_executable(CicloWhile College/console/CicloWhile.cpp)

add_executable(programacion College/position-color/programacion.cpp)

add_executable(stars College/Stars/Stars.cpp)

add_executable(triangulo College/BuclesAnidados/TrianguloIsoceles.cpp)

add_executable(fila College/BuclesAnidados/NumeroFilas.cpp)

add_executable(matriz College/BuclesAnidados/Matriz.cpp)