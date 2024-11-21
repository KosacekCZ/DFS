cmake_minimum_required(VERSION 3.29)
project(c_sandbox C)

set(CMAKE_C_STANDARD 23)

add_executable(c_sandbox main.c
        calc.h
        calc.c
        sorting.h
        sorting.c
        DFS.c
        DFS.h
        random.c
        random.h)
