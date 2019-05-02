#include "Board.h"
#include "MovementEngine.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <array>
#define WHITE 1
#define BLACK -1
using std::cout;
using std::endl;
void Board::printBoard()
{
	cout << "-------------------------------" << endl;
	for (int i = 0; i <= 7; i++) { //i is the row
		for (int j = 0; j <= 7; j++) { //j is the coloumn
			getPieceAtLocation(i, j);
		}

		cout << endl << "-------------------------------" << endl;
	}

}


void Board::getPieceAtLocation(int row, int column)//currently prints out the piece given the passed in row and column
{
	if (boardArray[row][column] == 0){
		cout << "|0| ";
	}
	else {
		char workingPiece = boardArray[row][column]->getName();

		switch (workingPiece) {
		case 'P':
			cout << "|P| ";
			break;
		case 'R':
			cout << "|R| ";
			break;
		case 'N':
			cout << "|N| ";
			break;
		case 'B':
			cout << "|B| ";
			break;
		case 'Q':
			cout << "|Q| ";
			break;
		case 'K':
			cout << "|K| ";
			break;
		case NULL:
			cout << "- ";
			break;
		}
	}
}
void Board::setUpBoard()
{
	for (int i = 0; i <= 7; i++) { //i is the row
		for (int j = 0; j <= 7; j++) { //j is the coloumn
			boardArray[i][j] = 0;
		}
	}
	//blacks pieces
	boardArray[0][0] = new Rook;
	boardArray[0][1] = new Knight;
	boardArray[0][2] = new Bishop;
	boardArray[0][3] = new Queen;
	boardArray[0][4] = new King;
	boardArray[0][5] = new Bishop;
	boardArray[0][6] = new Knight;
	boardArray[0][7] = new Rook;
	boardArray[1][0] = new Pawn;
	boardArray[1][1] = new Pawn;
	boardArray[1][2] = new Pawn;
	boardArray[1][3] = new Pawn;
	boardArray[1][4] = new Pawn;
	boardArray[1][5] = new Pawn;
	boardArray[1][6] = new Pawn;
	boardArray[1][7] = new Pawn;

	//whites pieces
	boardArray[7][0] = new Rook;
	boardArray[7][1] = new Knight;
	boardArray[7][2] = new Bishop;
	boardArray[7][3] = new Queen;
	boardArray[7][4] = new King;
	boardArray[7][5] = new Bishop;
	boardArray[7][6] = new Knight;
	boardArray[7][7] = new Rook;
	boardArray[6][0] = new Pawn;
	boardArray[6][1] = new Pawn;
	boardArray[6][2] = new Pawn;
	boardArray[6][3] = new Pawn;
	boardArray[6][4] = new Pawn;
	boardArray[6][5] = new Pawn;
	boardArray[6][6] = new Pawn;
	boardArray[6][7] = new Pawn;

	for (int i = 0; i <= 1; i++) { //i is the row
		for (int j = 0; j <= 7; j++) { //j is the coloumn
			boardArray[i][j]->colour.setColour(BLACK);
		}
	}
	for (int i = 6; i <= 7; i++) { //i is the row
		for (int j = 0; j <= 7; j++) { //j is the coloumn
			boardArray[i][j]->colour.setColour(WHITE);
		}
	}
}


