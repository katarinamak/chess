//
// Created by Katarina Makivic on 2022-06-20.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H


#include "Piece.h"


class Board {
    const int DIMENSION = 8;
    vector<vector<Piece *>> grid;

public:
    Piece *get(int file, int rank);
    void set(int file, int rank, Piece *piece);
};


#endif //CHESS_BOARD_H
