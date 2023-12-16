cmake_minimum_required(VERSION 3.26)
project(praktikum_10_3_FH_Aachen_BinaererSuchbaum)

set(CMAKE_CXX_STANDARD 17)

add_executable(praktikum_10_3_FH_Aachen_BinaererSuchbaum
        BinaererSuchbaum.cpp
        BinaererSuchbaum.h
        BaumKnoten.h
        BaumKnoten.cpp
        suchbaum_klasse_main.cpp
        test_binaerer_suchbaum_klasse.cpp)
