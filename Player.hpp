#include "Board.hpp"
#include <vector>
#include <utility>
#include <ostream>

class Player{
    public:
        Player();
        ~Player() = default;
        void addLastShot(int, int, bool);
        bool processOpponentShot(int, int);
        void addPiece(int, int, bool, int);
        std::ostream& showBoard(std::ostream&);
        std::ostream& showPreviousShots(std::ostream&);
    private:
        Board _gameBoard;
        std::vector<std::pair<std::pair<int, int>, bool>> _previousShots;
};
