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


    // ****** PLACING SHIPS FOR PLAYER 1 ******
	cout << "        PLACING PIECES     " << endl;
	cout << " You will be given 5 ships: [1] Big ship, [2] Medium ships, and [2] Small Ships" << endl;
    cout << playerOne.getName() << " it's time to place your ships!" << endl;
	cout << " to place your pieces, please enter the coordinates in the board" << endl;
	cout << " in the format: x-coordinate [space] y-coordinate [space] is horizontal? (y/n)" << endl;

	cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Place your Big ship (3 tiles big): ";
	int x,y;
	string horizontal;
	cin >> x >> y >> horizontal;

	if(horizontal == "y")
	    playerOne.addPiece(x, y, true, 3);
    else
        playerOne.addPiece(x,y, false, 3);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Now place your medium ship (2 tiles big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerOne.addPiece(x, y, true, 2);
    else
        playerOne.addPiece(x,y, false, 2);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Add a second medium ship: ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerOne.addPiece(x, y, true, 2);
    else
        playerOne.addPiece(x,y, false, 2);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Now place your small ship (1 tile big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerOne.addPiece(x, y, true, 1);
    else
        playerOne.addPiece(x,y, false, 1);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Add your second small ship (1 tile big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerOne.addPiece(x, y, true, 1);
    else
        playerOne.addPiece(x,y, false, 1);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    // ****** TRANSITION ******
    cout << "Thanks you "  << playerOne.getName() << " ,";
    cout << " please hand the controls to " << playerTwo.getName() << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;


    // ****** PLACING SHIPS FOR PLAYER 2 ******
    cout << "        PLACING PIECES     " << endl;
    cout << " You will be given 5 ships: [1] Big ship, [2] Medium ships, and [2] Small Ships" << endl;
    cout << playerTwo.getName() << " it's time to place your ships!" << endl;
    cout << " to place your pieces, please enter the coordinates in the board" << endl;
    cout << " in the format: x-coordinate [space] y-coordinate [space] is horizontal? (y/n)" << endl;

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Place your Big ship (3 tiles big): ";
    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 3);
    else
        playerTwo.addPiece(x,y, false, 3);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Now place your medium ship (2 tiles big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 2);
    else
        playerTwo.addPiece(x,y, false, 2);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Add a second medium ship: ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 2);
    else
        playerTwo.addPiece(x,y, false, 2);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Now place your small ship (1 tile big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 1);
    else
        playerTwo.addPiece(x,y, false, 1);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Add your second small ship (1 tile big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 1);
    else
        playerTwo.addPiece(x,y, false, 1);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;


	//playerOne.showPreviousShots(std::cout);
	//playerOne.showBoard(cout);
	//game.placePieceVertical(1,1,2);
	//std::cout << game;
	//cout << endl << "****************************" << endl;
	//game.placePieceHorizontal(2,3,3);
	//std::cout << game;
	cout << endl;
	//game.processHit(1,1);
	//std::cout << game;
	//std::cout << std::endl;
	//std::cout << game.checkForGameOver();

}
