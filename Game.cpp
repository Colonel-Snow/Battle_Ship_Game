#include "Game.hpp"
using std::vector;
using std::ostream;
using std::endl;
using std::cout;

#include <string>
using std::string;

Game::Game(){
	for(int i = 0; i < _boardSize; i++){
		_board.push_back(vector<int>());
		for(int k = 0; k < _boardSize; k++){
			_board[i].push_back(0);
		}
	}
}

ostream& operator<<(ostream& os, Game& game){
	cout << "   ";
	for(int i = 1; i < 6; ++i){
		cout << " " << i;
	}
	cout << endl << endl;

	int counter = 1;
	for(auto rowVector : game._board){
		cout << counter << "  ";
		for(auto item : rowVector){
			os << " " << item;
		}
		os << " " << endl;
		counter++;
	}
	return os;
}

void Game::placePiece(int x, int y, int shipSize){
	// TODO: support placing ships larger than 1 block long. Need to check if within bounds
	// of board, and if ship is being placed horizontally or vertically
}

bool Game::checkForHit(int x, int y){
	return _board[y-1][x-1] == 1;
}

bool Game::checkForGameOver(){
	for(auto rowVector : _board){
		for(auto item : rowVector){
			if(item == 1)
				return false;
		}
	}
	return true;
}

void Game::processHit(int x, int y){
	_board[y-1][x-1] = 2;
}
