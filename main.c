#include <stdio.h>
#include "board.h"
#include "pieces.h"


int main()
{
    Board testBoard = InitBoard();

    printf("Square 45 is: %d\n", testBoard.square[45].shade);
    printf("Square 46 is: %d\n", testBoard.square[46].shade);
    printf("Square 0 is: %d\n", testBoard.square[0].shade);
    printf("Square 63 is: %d\n", testBoard.square[63].shade);
    printf("Square 62 is: %d\n", testBoard.square[62].shade);
    printf("Square 23 is: %d\n", testBoard.square[23].shade);

    return 0;
}