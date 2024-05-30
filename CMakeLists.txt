cmake_minimum_required(VERSION 3.26)
project(HaloInfiniteSpartanXpCalulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(HaloInfiniteSpartanXpCalulator main.cpp
        include/Rank.h
        src/Rank.cpp)
