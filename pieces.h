#ifndef PIECES_H
#define PIECES_H

// Numeric definition of the pieces
#define PAWN 0
#define KNIGHT 1
#define BISHOP 2
#define ROOK 3
#define QUEEN 4
#define KING 5

// Numeric definition of the piece colors
#define WHITE 0
#define BLACK 1

// Numeric definition of the square shades
#define LIGHT 0
#define DARK 1

typedef struct Piece
{
    int type;
    int color;
}Piece;





#endif