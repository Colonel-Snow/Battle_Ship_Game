#include "Game.hpp"

int main(){
	Game game;
	game.placePiece(1,1);
	std::cout << game;
	std::cout << std::endl;
	game.processHit(1,1);
	std::cout << game;
	std::cout << std::endl;
	std::cout << game.checkForGameOver();
}
