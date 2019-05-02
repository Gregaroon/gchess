#include "Board.h"
#include "MovementEngine.h"

#pragma once

//this is the engine that will determine the way that pieces can move and move them as well

void MovementEngine::movePiece(Board board, int sourceRow, int sourceColumn, int destinationRow, int destinationColumn){	
	
		board.boardArray[destinationRow][destinationColumn] = boardArray[sourceRow][sourceColumn];
		board.boardArray[sourceRow][sourceColumn] = 0;
		
}