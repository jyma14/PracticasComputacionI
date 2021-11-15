cmake_minimum_required(VERSION 3.20)
project(CargaElectrica)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CargaElectrica
        Grupo.cpp
        Grupo.h
        CargaElectrica.cpp)
