cmake_minimum_required(VERSION 3.20)
project(correction C)

set(CMAKE_C_STANDARD 11)

add_executable(TP8_EX1 TP8/main_tp8_ex1.c)

add_executable(TP9_EX1 TP9/main_tp9_ex1.c)
add_executable(TP9_EX2 TP9/main_tp9_ex2.c)
add_executable(TP9_EX3 TP9/main_tp9_ex3.c)
add_executable(TP9_EX4 TP9/main_tp9_ex4.c)
add_executable(TP9_EX5 TP9/main_tp9_ex5.c)
add_executable(TP9_EX6 TP9/main_tp9_ex6.c)
add_executable(TP9_EX7 TP9/main_tp9_ex7.c)
add_executable(TP9_EX8 TP9/main_tp9_ex8.c)
add_executable(TP9_EX9 TP9/main_tp9_ex9.c)
add_executable(TP9_EX10 TP9/main_tp9_ex10.c)
add_executable(TP9_EX11 TP9/main_tp9_ex11.c)
add_executable(TP9_EX12 TP9/main_tp9_ex12.c)
add_executable(TP9_EX13 TP9/main_tp9_ex13.c)
add_executable(TP9_EX14 TP9/main_tp9_ex14.c)
add_executable(TP9_EX15 TP9/main_tp9_ex15.c)

add_executable(TP10_EX1 TP10/exo1001/main_tp10_ex1.c TP10/exo1001/exo1001.c TP10/exo1001/exo1001.h)
add_executable(TP10_EX5 TP10/exo1005/main_tp10_ex5.c TP10/exo1005/exo1005.c TP10/exo1005/exo1005.h)
add_executable(TP10_EX6 TP10/exo1006/main_tp10_ex6.c TP10/exo1006/exo1006.c TP10/exo1006/exo1006.h)
add_executable(TP10_EX7 TP10/exo1007/main_tp10_ex7.c TP10/exo1007/exo1007.c TP10/exo1007/exo1007.h)
add_executable(TP10_EX8 TP10/exo1008/main_tp10_ex8.c TP10/exo1008/exo1008.c TP10/exo1008/exo1008.h)

add_executable(TP15
        "TP15/Exercice 1/Exercice 1501.c"
        "TP15/Exercice 1/Exercice 1501.h"
        TP15/main.c
        "TP15/Exercice 2/Exercice 1502.c"
        "TP15/Exercice 2/Exercice 1502.h"
        "TP15/Exercice 3/Exercice 1503.c"
        "TP15/Exercice 3/Exercice 1503.h"
        "TP15/Exercice 4/Exercice 1504.c"
        "TP15/Exercice 4/Exercice 1504.h"
        "TP15/Exercice 5/Exercice 1505.c"
        "TP15/Exercice 5/Exercice 1505.h"
)