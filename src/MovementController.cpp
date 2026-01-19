#include "MovementController.h"

class MovementController
{
	Uint8_t* requestMoves ChessPieceInfo getPieceInfoAtPosition(const ChessPieceInfo currentPiece, const Uint8 currentlocation, const ChessPieceInfo& currentState) {
		Uint8_t* possibleMoves = new Uint8_t[32];
		Uint8_t moveIndex = 0;
		
		switch (currentPiece.piece) {
		case ChessPiece::Pawn:
			switch (currentPiece.white) {
				case true:
					possibleMoves[moveIndex++] = currentlocation - 8;
					break;
				case false:
					possibleMoves[moveIndex++] = currentlocation + 8;
					break;
			}
			break;
		case ChessPiece::Rook:
			for (Uint8_t i = 0; i < 8; i++) { // Checks Upward movement
				Uint8_t checkMove = currentlocation - (i * 8);
				if (checkMove < 64) {
					possibleMoves[moveIndex++] = checkMove;
				};
			};

			for (Uint8_t i = 0; i < 8; i++) { // Checks Leftward movement
				Uint8_t checkMove = currentlocation - i;
				if (checkMove < 64) {
					possibleMoves[moveIndex++] = checkMove;
				};
			};

			for (Uint8_t i = 0; i < 8; i++) { // Checks Rightward movement
				Uint8_t checkMove = currentlocation + i;
				if (checkMove < 64) {
					possibleMoves[moveIndex++] = checkMove;
				};
			};

			for (Uint8_t i = 0; i < 8; i++) { // Checks Downward movement
				Uint8_t checkMove = currentlocation + (i * 8);
				if (checkMove < 64) {
					possibleMoves[moveIndex++] = checkMove;
				};
			};

			possibleMoves[moveIndex++] = currentlocation + 8;
			break;
		case ChessPiece::Knight:
			
			if (currentlocation - 17 < 64) {
				possibleMoves[moveIndex++] = currentlocation - 17;
			};
			if (currentlocation - 15 < 64) {
				possibleMoves[moveIndex++] = currentlocation - 15;
			};
			if (currentlocation - 10 < 64) {
				possibleMoves[moveIndex++] = currentlocation - 10;
			};
			if (currentlocation - 6 < 64) {
				possibleMoves[moveIndex++] = currentlocation - 6;
			};
			if (currentlocation + 6 < 64) {
				possibleMoves[moveIndex++] = currentlocation + 6;
			};
			if (currentlocation + 10 < 64) {
				possibleMoves[moveIndex++] = currentlocation + 10;
			};
			if (currentlocation + 15 < 64) {
				possibleMoves[moveIndex++] = currentlocation + 15;
			};
			if (currentlocation + 17 < 64) {
				possibleMoves[moveIndex++] = currentlocation + 17;
			};

			break;
		case ChessPiece::Bishop:
			break;
		case ChessPiece::Queen:
			break;
		case ChessPiece::King:
			break;
		default:
			break;
		};
		return possibleMoves;
};