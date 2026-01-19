#pragma once
#include <cstdint>

class Chessboard {

	uint8_t board[64];
	int turn = 0;

	public:

		Chessboard();
		void ResetBoard();
		void PrintBoard() const;

	private:

		//helpers

};