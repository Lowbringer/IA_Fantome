//
// Created by Gaëtan Fritz on 08/02/2018.
//

#include "Character.h"

Character::Character(CharacterType type) {
    this->type = type;
    this->room = NULL;
}

Character::~Character() {
}

CharacterType Character::getCharacterType() {
    return this->type;
}

Case *Character::getRoom() {
    return this->room;
}

void Character::setRoom(Case *room) {
    this->room = room;
}