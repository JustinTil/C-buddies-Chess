#ifndef PIECES_H
#define PIECES_H

// Numeric definition of the pieces
#define PAWN 1
#define KNIGHT 2
#define BISHOP 3
#define ROOK 4
#define QUEEN 5
#define KING 6
#define EMPTY 0

// Numeric definition of the piece colors
#define CHESS_WHITE 0
#define CHESS_BLACK 1

// Numeric definition of the square shades
#define LIGHT 0
#define DARK 1

typedef struct Piece
{
    int type;
    int color;
}Piece;





#endif