//
// Created by Katarina Makivic on 2022-06-20.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include <vector>
#include "Move.h"
#include "Board.h"

using namespace std;

enum class Colour {black, white};
enum class PieceType {pawn, bishop, rook, queen, king, knight};

struct Square {
    int file;
    int rank;
};

class Piece {
protected:
    int file;
    int rank;
    char colour;

public:
    Piece(int file, int rank, char colour);
    bool hasMoved = false;
    bool isEmpty(int file, int rank, Board *board);
    bool isOpponent(int file, int rank, Board *board);
    vector<Move> possibleMoves;
//    vector<Move> captureMoves;
    int getFile();
    char getColour();
    int getRank();

    virtual char getCharRep() = 0;
    virtual ~Piece();

};


#endif //CHESS_PIECE_H
