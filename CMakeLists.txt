cmake_minimum_required(VERSION 3.7)
project(TP_n_3_Qt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(TP_n_3_Qt main.cpp Exercice1.cpp Exercice1.h Exercice2.cpp Exercice2.h)
target_link_libraries(TP_n_3_Qt Qt5::Widgets)
