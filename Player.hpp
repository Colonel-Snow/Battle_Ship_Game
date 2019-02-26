#include "Board.hpp"
#include <vector>
#include <utility>
#include <ostream>
#include <string>

class Player{
    public:
        Player(std::string n):_name(n){};
        ~Player() = default;
        std::string getName();
        void addLastShot(int, int, bool);
        bool processOpponentShot(int, int);
        void addPiece(int, int, bool, int);
        std::ostream& showBoard(std::ostream&);
        std::ostream& showPreviousShots(std::ostream&);
    private:
        std::string _name;
        Board _gameBoard;
        std::vector<std::pair<std::pair<int, int>, bool>> _previousShots;
};
