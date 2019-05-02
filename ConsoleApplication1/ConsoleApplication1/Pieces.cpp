#include "MovementEngine.h"
#include "Pieces.h"
#pragma once
void PieceColor::setColour(int colourToSet) 
{
	colour = colourToSet;
}
int PieceColor::getColour()
{
	return colour;
}
char Pawn::getName() {
	return 'P';
}

char Rook::getName() {
	return 'R';
}
char Knight::getName() {
	return 'N';
}
char Bishop::getName() {
	return 'B';
}
char Queen::getName() {
	return 'Q';
}
char King::getName() {
	return 'K';
}
void getPieceName();
int setPieceName();

