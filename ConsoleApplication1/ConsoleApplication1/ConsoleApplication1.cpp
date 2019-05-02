
#include "Pieces.h"
#include "Board.h"
#include "MovementEngine.h"
#include <iostream>
#include <string>
#include <stdio.h>

using std::cout;
using std::endl;

#define NUMBER_OF_BOARDS 1
#define WHITE 1
#define BLACK -1
#pragma once
int main()
{
	MovementEngine engine;
	Board testBoard;
	//Piece *p = new Pawn;
	//Pawn whitePawn1;
	//cout << whitePawn1.colour.getColour() << endl;
	//whitePawn1.colour.setColour(WHITE);
	//cout << whitePawn1.colour.getColour() << endl;
	//whitePawn1.colour.setColour(BLACK);
	//cout << whitePawn1.colour.getColour() << endl;
	//char a = p->getName();
	//cout << a;
	testBoard.setUpBoard();
	//testBoard.getPieceAtLocation(1, 1);
	
	testBoard.printBoard();
	testBoard.getPieceAtLocation(1, 1);
	//testBoard.movePiece(6, 4, 6, 5);
	testBoard.printBoard();
	cout << "Welcome to Gregaroon's attempt to make a working chess board in C++";

}