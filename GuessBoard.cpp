//
// Created by kerne on 2/27/2019.
//

#include "GuessBoard.h"
using std::vector;
using std::ostream;
using std::endl;
using std::cout;

#include <string>
using std::string;

GuessBoard::GuessBoard(){
    for(int i = 0; i < _GuessboardSize; i++){
        _guide.push_back(vector<string>());
        for(int k = 0; k < _GuessboardSize; k++){
            _guide[i].push_back("?");
        }
    }
}

ostream& operator<<(ostream& os, GuessBoard& board){
    cout << endl;
    int counter = 1;
    for(auto rowVector : board._guide){
        cout << counter << "  ";
        for(auto item : rowVector){
            os << " " << item;
        }
        os << " " << endl;
        counter++;
    }

    cout << endl << "   ";
    for(int i = 1; i < 6; ++i){
        cout << " " << i;
    }
    return os;
}


void GuessBoard::processGuess(int x, int y, string s){
    _guide[y-1][x-1] = s;
}

int GuessBoard::getBoardSize(){
    return _GuessboardSize;
}