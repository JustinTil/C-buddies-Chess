#include "board.h"


Board InitBoard()
{
    // Initialization of the 64 squares of the board
    Board brd;
    brd.square = (Square*)malloc(sizeof(Square) * 64);

    // Place the pieces for the beginning of the game
    brd.square[0].piece.type = ROOK;
    brd.square[1].piece.type = KNIGHT;
    brd.square[2].piece.type = BISHOP;
    brd.square[3].piece.type = QUEEN;
    brd.square[4].piece.type = KING;
    brd.square[5].piece.type = BISHOP;
    brd.square[6].piece.type = KNIGHT;
    brd.square[7].piece.type = ROOK;
    brd.square[8].piece.type = PAWN;
    brd.square[9].piece.type = PAWN;
    brd.square[10].piece.type = PAWN;
    brd.square[11].piece.type = PAWN;
    brd.square[12].piece.type = PAWN;
    brd.square[13].piece.type = PAWN;
    brd.square[14].piece.type = PAWN;
    brd.square[15].piece.type = PAWN;
    for (int i = 0; i < 16; i++)
    {
        brd.square[i].piece.color = WHITE;
    }

    brd.square[48].piece.type = PAWN;
    brd.square[49].piece.type = PAWN;
    brd.square[50].piece.type = PAWN;
    brd.square[51].piece.type = PAWN;
    brd.square[52].piece.type = PAWN;
    brd.square[53].piece.type = PAWN;
    brd.square[54].piece.type = PAWN;
    brd.square[55].piece.type = PAWN;
    brd.square[56].piece.type = ROOK;
    brd.square[57].piece.type = KNIGHT;
    brd.square[58].piece.type = BISHOP;
    brd.square[59].piece.type = QUEEN;
    brd.square[60].piece.type = KING;
    brd.square[61].piece.type = BISHOP;
    brd.square[62].piece.type = KNIGHT;
    brd.square[63].piece.type = ROOK;
    for (int i = 48; i < 64; i++)
    {
        brd.square[i].piece.color = BLACK;
    }

    // Initialize the shade of each square
    


    return brd;
}