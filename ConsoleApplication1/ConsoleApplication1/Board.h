#include "Pieces.h"
#include "MovementEngine.h"
#pragma once
class Board
{
public:
	Piece *boardArray[8][8];
	void printBoard();
	void getPieceAtLocation(int row, int column);
	void setUpBoard();
	
};

class MovementEngine : public Board {
public:
	void movePiece(Board board, int sourceRow, int sourceColumn, int destinationRow, int destinationColumn);
};