#include "Game.hpp"

int main(){
	Game game;
	game.placePiece(0,0,2);
	std::cout << game;
	std::cout << std::endl;
	game.placePiece(2,3,2);
	std::cout << game;
	std::cout << std::endl;
	//game.processHit(1,1);
	//std::cout << game;
	//std::cout << std::endl;
	//std::cout << game.checkForGameOver();
}
