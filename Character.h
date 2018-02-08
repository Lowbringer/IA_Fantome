//
// Created by Gaëtan Fritz on 08/02/2018.
//

#ifndef IA_CHARACTER_H
#define IA_CHARACTER_H


#include "CharacterType.h"
#include "Case.h"

class Character {

private:
    CharacterType type;
    Case *room;

public:
    Character(CharacterType type);
    ~Character();
    CharacterType getCharacterType();
    Case *getRoom();
    void setRoom(Case *room);
};


#endif //IA_CHARACTER_H
