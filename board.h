#ifndef BOARD_H
#define BOARD_H

#include "pieces.h"


// structure definitions
typedef struct Square
{
    Piece piece;
    int shade;
}Square;


typedef struct Board
{
    Square* square;
}Board;


// Function prototypes
Board InitBoard();


// other ideas: InitBoardFromFEN()
//              InitBoardFromPGN()

#endif
