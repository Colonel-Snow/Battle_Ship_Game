#include "Board.hpp"
using std::vector;
using std::ostream;
using std::endl;
using std::cout;

#include <string>
using std::string;

Board::Board(){
	for(int i = 0; i < _boardSize; i++){
		_squares.push_back(vector<int>());
		for(int k = 0; k < _boardSize; k++){
			_squares[i].push_back(0);
		}
	}
}

ostream& operator<<(ostream& os, Board& board){
    cout << endl;
	int counter = 1;
	for(auto rowVector : board._squares){
		cout << counter << "  ";
		for(auto item : rowVector){
			os << " " << item;
		}
		os << " " << endl;
		counter++;
	}

    cout << endl << "   ";
    for(int i = 1; i < 6; ++i){
        cout << " " << i;
    }
	return os;
}

void Board::placePieceHorizontal(int x, int y, int shipSize){
	if ((shipSize > 3) or (x > _boardSize) or (x < 1) or (y > 5) or (y < 1)) {
		throw "Error: Invalid coordinates.";
	}

	else {
        for (int i = 0; i < shipSize; ++i) {
            ++x;
            _squares[y - 1][x - 2] = 1;
        }
    }
}

void Board::placePieceVertical(int x, int y, int shipSize){
    if ((shipSize > 3) or (x > _boardSize) or (x < 1) or (y > 5) or (y < 1)) {
		throw "Error: Invalid coordinates.";
    }

    else {
        for (int i = 0; i < shipSize; ++i) {
            ++y;
            _squares[y - 2][x - 1] = 1;
        }
    }
}

bool Board::checkForHit(int x, int y){
	return (_squares[y-1][x-1] == 1);
}

bool Board::shipsRemaining(){
	for(auto rowVector : _squares){
		for(auto item : rowVector){
			if(item == 1)
				return false;
		}
	}
	return true;
}

void Board::processHit(int x, int y){
	_squares[y-1][x-1] = 2;
}

int Board::getBoardSize(){
	return _boardSize;
}
