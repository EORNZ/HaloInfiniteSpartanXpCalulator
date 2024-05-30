cmake_minimum_required(VERSION 3.26)
project(HaloInfiniteSpartanXpCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(HaloInfiniteSpartanXpCalculator main.cpp
        include/Rank.h
        src/Rank.cpp)
