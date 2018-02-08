//
// Created by Gaëtan Fritz on 08/02/2018.
//

#ifndef IA_GAMEBOARD_H
#define IA_GAMEBOARD_H


#include <list>
#include "Case.h"

class GameBoard {

private:
    std::list<Case> board;

public:
    GameBoard();
    ~GameBoard();
    Case getCase(int caseNbr);
    std::list<Case> getBoard();

};


#endif //IA_GAMEBOARD_H
