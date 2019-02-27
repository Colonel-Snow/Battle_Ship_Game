#include "Board.hpp"
#include "GuessBoard.h"
#include <vector>
#include <utility>
#include <ostream>
#include <string>

class Player{
    public:
        Player(std::string n):_name(n){};
        ~Player() = default;
        std::string getName();
        //void addLastShot(int, int, bool);
        bool processOpponentShot(int, int);
        void addPiece(int, int, bool, int);
        std::ostream& showBoard(std::ostream&);
        //std::ostream& showPreviousShots(std::ostream&);

        std::ostream& showGuessBoard(std::ostream&);
        void addGuess(int, int, std::string);
        bool isLost();


    private:
        std::string _name;
        Board _gameBoard;
        GuessBoard _referenceBoard;
        std::vector<std::pair<std::pair<int, int>, bool>> _previousShots;
};
