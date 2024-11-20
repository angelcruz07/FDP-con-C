cmake_minimum_required(VERSION 3.23)
project(FDP_con_C)
set(CMAKE_CXX_STANDARD 17)


add_executable(Matrices College/Matrices/Matrices2.cpp
        "College/Serie de ejercicios/Ejercicio1.cpp"
        "College/Serie de ejercicios/Ejercicio2.cpp")
add_executable(Matriz3 College/Matrices/Matriz3.cpp)