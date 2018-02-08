cmake_minimum_required(VERSION 3.9)
project(IA)

set(CMAKE_CXX_STANDARD 11)

add_executable(IA main.cpp GameBoard.cpp GameBoard.h Case.cpp Case.h Character.cpp Character.h CharacterType.h)