#include "Board.hpp"
#include "Player.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;

int main(){

	cout << "      *******************************" << endl;
	cout << "           WELCOME TO BATTLESHIP!    " << endl;
	cout << "      *******************************" << endl;
	cout << "      A war-themed board game for two" << endl;
	cout <<	"players in which the opponents try to guess" << endl;
    cout << " the location of the other's various ships." << endl;

    string name1, name2;
	cout << "      *******************************" << endl;
    cout << "    To start, enter that Player's names. " << endl;
    cout << "       Player One: ";
 	cin >> name1;
    cout << endl << "       Player Two: ";
    cin >> name2;

	cout << endl << "****************************" << endl << endl;

	Player playerOne(name1);
	Player playerTwo(name2);



	cout << "        PLACING PIECES     " << endl;
	cout << " to place your pieces, please enter the coordinates in the board" << endl;
	cout << " in the format: x-coordinate, y-coordinate,  "
	cout << playerOne.getName() << " please, place your ships" << endl;
	cout << " Choose the coordinates in a ";
	cout << " ";
	//playerOne.showPreviousShots(std::cout);
	//playerOne.showBoard(cout);
	//game.placePieceVertical(1,1,2);
	//std::cout << game;
	cout << endl << "****************************" << endl;
	//game.placePieceHorizontal(2,3,3);
	//std::cout << game;
	cout << endl;
	//game.processHit(1,1);
	//std::cout << game;
	//std::cout << std::endl;
	//std::cout << game.checkForGameOver();

}
