#include "../header/Chessboard.hpp"
#include <iostream>


Chessboard::Chessboard() {
	ResetBoard();
}

void Chessboard::ResetBoard() {
	uint8_t initialPosition[64] = {
		2, 3, 4, 5, 6, 4, 3, 2,
		1, 1, 1, 1, 1, 1, 1, 1,
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 1, 1, 1,
		4, 2, 3, 5, 6, 3, 2, 4,
	};
	for (int i = 0; i < 64; ++i) {
		board[i] = initialPosition[i];
	}
}

void Chessboard::PrintBoard() const {
	for (int i = 0; i < 64; ++i) {
		std::cout << (int)board[i] << " ";
		if ((i + 1) % 8 == 0) std::cout << std::endl;
	}
}

//test