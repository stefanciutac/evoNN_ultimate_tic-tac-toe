cmake_minimum_required(VERSION 4.1)
project(ultimate_ttt_bot_v1)

set(CMAKE_CXX_STANDARD 20)

add_executable(ultimate_ttt_bot_v1 main.cpp
        NN.cpp
        NN.h
        Genome.cpp
        Genome.h
        Board.cpp
        Board.h
        Tournament.cpp
        Tournament.h)
