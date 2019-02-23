#include "Game.hpp"

int main(){
	Game game;
	game.placePieceVertical(1,1,3);
	std::cout << game;
	std::cout << std::endl << "****************************" << std::endl;
	game.placePieceHorizontal(2,3,3);
	std::cout << game;
	std::cout << std::endl;
	//game.processHit(1,1);
	//std::cout << game;
	//std::cout << std::endl;
	//std::cout << game.checkForGameOver();
}
