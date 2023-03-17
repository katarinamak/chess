//
// Created by Katarina Makivic on 2022-06-20.
//

#include "Piece.h"

using namespace std;

Piece::Piece(int file, int rank, char colour) : file{file}, rank{rank}, colour{colour}, hasMoved{false} {}

char Piece::getColour() {
    return colour;
}

int Piece::getFile() {
    return file;
}

int Piece::getRank() {
    return rank;
}

bool Piece::isEmpty(int file, int rank, Board *board) {
    if (file >= 0 && rank >= 0 && file < 8 && rank < 8) {
        if (board->getPieceAt(file, rank) == nullptr) {
            return true;
        } else {
            return false;
        }
    }
}

bool Piece::isOpponent(int file, int rank, Board *board) {
    Piece *piece = board->getPieceAt(file, rank);

    if (file >= 0 && rank >= 0 && file < 8 && rank < 8) {
        return piece->getColour() != this->colour;
    }
}

Piece::~Piece() {}