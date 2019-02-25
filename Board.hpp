#include <vector>
#include <iostream>

#ifndef BOARD_HPP_
#define BOARD_HPP_
class Board{
	friend std::ostream& operator<<(std::ostream&, Board&);
	public:
		Board();
		~Board() = default;
		void placePieceVertical(int, int, int);
        void placePieceHorizontal(int, int, int);
		bool checkForHit(int, int);
		void processHit(int, int);
		bool shipsRemaining();
		int getBoardSize();
	private:
		std::vector<std::vector<int>> _squares;
		int _boardSize = 5;
};
#endif