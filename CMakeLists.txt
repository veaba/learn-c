cmake_minimum_required(VERSION 3.19)
project(learn_c C)

set(CMAKE_C_STANDARD 11)

add_executable(learn_c
        hello.c sizeof.c float.c a.c b.c)

add_executable(float float.c)
add_executable(b b.c)
add_executable(a a.c)
add_executable(define define.c)
add_executable(const const.c)