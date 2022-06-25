//
// Created by Katarina Makivic on 2022-06-20.
//

#ifndef CHESS_PIECES_H
#define CHESS_PIECES_H

#include <vector>

using namespace std;

enum class Colour {black, white};
enum class PieceType {pawn, bishop, rook, queen, king, knight};

struct Move {
public:
    int x;
    int y;
    virtual int getX();
    virtual int getY();
};

class pieces {
private:

public:
    Colour colour;
    vector<Move> possibleMoves;
    vector<Move> captureMoves;

};


#endif //CHESS_PIECES_H
