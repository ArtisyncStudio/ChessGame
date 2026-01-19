#pragma once
#include "ChessPieces.h"

struct ChessPieceInfo {
	ChessPiece piece;
	bool hasMoved = false;
	bool white = true;
};