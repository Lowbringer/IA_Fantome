//
// Created by Gaëtan Fritz on 08/02/2018.
//

#include "Case.h"

Case::Case(int caseNbr) {
    this->caseNbr = caseNbr;
    this->charactersInRoom = new std::list<Character>();
}

Case::~Case() {
    delete(charactersInRoom);
}

std::list<Character> *Case::getCharactersInRoom() {
    return this->charactersInRoom;
}

int Case::getCaseNbr() {
    return this->caseNbr;
}