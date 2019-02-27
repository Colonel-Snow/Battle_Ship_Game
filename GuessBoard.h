//
// Created by kerne on 2/27/2019.
//
#include <vector>
#include <iostream>
#include <string>

#ifndef BATTLE_SHIP_GAME_GUESSBOARD_H
#define BATTLE_SHIP_GAME_GUESSBOARD_H

class GuessBoard{
    friend std::ostream& operator<<(std::ostream&, GuessBoard&);
public:
    GuessBoard();
    ~GuessBoard() = default;
    void processGuess(int, int, std::string);
    int getBoardSize();

private:
    std::vector<std::vector<std::string>> _guide;
    int _GuessboardSize = 5;
};

#endif //BATTLE_SHIP_GAME_GUESSBOARD_H

