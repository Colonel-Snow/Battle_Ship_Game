#include "Player.hpp"
using std::ostream;
using std::vector;
#include <string>
using std::string;

string Player::getName(){return _name;}

/*void Player::addLastShot(int xCoord, int yCoord, bool isHit){
    auto coords = std::make_pair(xCoord, yCoord);
    auto coordsWithHit = std::make_pair(coords, isHit);
    _previousShots.push_back(coordsWithHit);
}*/

bool Player::processOpponentShot(int xCoord, int yCoord){
    if(_gameBoard.checkForHit(xCoord, yCoord)){
        _gameBoard.processHit(xCoord, yCoord);
        return true;
    }
    return false;
}

void Player::addPiece(int xCoord, int yCoord, bool isHorizontal, int shipSize){
    if(isHorizontal)
        _gameBoard.placePieceHorizontal(xCoord, yCoord, shipSize);
    else
        _gameBoard.placePieceVertical(xCoord, yCoord, shipSize);
}

ostream& Player::showBoard(ostream& os){
    os << _gameBoard;
    return os;
}

/*ostream& Player::showPreviousShots(ostream& os){
    vector<vector<char>> display;
    for(int y = 0; y < _gameBoard.getBoardSize(); y++){
        display.push_back(vector<char>(_gameBoard.getBoardSize()));
        for(auto item : display[y]){
            item = '_';
        }
    }
    for(auto coordPair : _previousShots){
        auto coords = coordPair.first;
        if(coords.second == true){
            display[coords.second][coords.first] = 'X';
        }
        else{
            display[coords.second][coords.first] = 'O';
        }
    }
}*/

bool Player::isLost(){
    return _gameBoard.shipsRemaining();
}

ostream& Player::showGuessBoard(std::ostream& os){
    os << _referenceBoard;
    return os;
}

void Player::addGuess(int xCoord, int yCoord){
    if(_gameBoard.checkForHit(xCoord, yCoord)){
        _referenceBoard.processGuess(xCoord, yCoord, "~");
    }
        _referenceBoard.processGuess(xCoord, yCoord, "X");
}
