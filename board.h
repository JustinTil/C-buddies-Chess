#ifndef BOARD_H
#define BOARD_H

#include "pieces.h"

// structure definitions

typedef struct Square
{
    Piece piece;
    const int shade;
}Square;


typedef struct Board
{
    Square* square;
}Board;


// Function prototypes

Board InitBoard();
int GetSquareColor(Square sqr);


#endif