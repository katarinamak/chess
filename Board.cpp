//
// Created by Katarina Makivic on 2022-06-20.
//

#include "Board.h"

Piece* Board::get(int file, int rank) {
    return grid[file][rank]; // check order of file and rank
}