#include <iostream>
#include <string>
#include <stdio.h>

using std::string;
#pragma once
class PieceColor
{
public:
	void setColour(int colourToSet);
	int getColour();
private:
	int colour = 0;
};

class Piece {
public:
	PieceColor colour;
	virtual char getName() = 0;
};


class Pawn : public Piece
{
public:
	char name = 'P';
	char getName();
	int pieceValue = 1;
	int pieceNumberType = 1;
	int uniqueTag = 0;

};
class Rook : public Piece
{
	char name = 'R';
	char getName();
	int pieceValue = 6;
	int pieceNumberType = 6;
	int uniqueTag = 0;
};
class Knight : public Piece
{
	char name = 'N';
	char getName();
	int pieceValue = 3;
	int pieceNumberType = 2;
	int uniqueTag = 0;
};
class Bishop : public Piece
{
	char name = 'B';
	char getName();
	int pieceValue = 3;
	int pieceNumberType = 3;
	int uniqueTag = 0;
};
class Queen : public Piece
{
	char name = 'Q';
	char getName();
	int pieceValue = 9;
	int pieceNumberType = 9;
	PieceColor color;
	int uniqueTag = 0;
};
class King : public Piece
{
	char name = 'K';
	char getName();
	int pieceValue = 100;
	int pieceNumberType = 10;
	int uniqueTag = 0;
};
