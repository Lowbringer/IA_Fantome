//
// Created by Gaëtan Fritz on 08/02/2018.
//

#include "GameBoard.h"

GameBoard::GameBoard() {
    this->board = new std::list<Case>();
}

GameBoard::~GameBoard() {
    delete this->board;
}

Case GameBoard::getCase(int caseNbr) {
    for (std::list<Case>::iterator it = this->board->begin(); it != this->board->end(); it++) {
        if ((*it).getCaseNbr() == caseNbr) {
            return (*it);
        }
    }
    return NULL;
}

std::list<Case> *GameBoard::getBoard() {
    return this->board;
}