#include "Board.hpp"
#include "Player.hpp"

int main(){
	Player playerOne;
	playerOne.showPreviousShots(std::cout);
	Board game;
	game.placePieceVertical(1,1,2);
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
