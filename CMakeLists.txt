cmake_minimum_required(VERSION 3.22)
project(chess)

set(CMAKE_CXX_STANDARD 14)

add_executable(chess main.cpp Piece.h Board.h Piece.cpp Board.cpp Move.cpp Move.h)
