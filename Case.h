//
// Created by Gaëtan Fritz on 08/02/2018.
//

#ifndef IA_CASE_H
#define IA_CASE_H


#include <list>
#include "Character.h"

class Case {

private:
    int caseNbr;
    std::list<Character> charactersInRoom;

public:
    Case();
    ~Case();
    std::list<Character> getCharactersInRoom();
};


#endif //IA_CASE_H
