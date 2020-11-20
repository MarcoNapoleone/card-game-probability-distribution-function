//
// Created by makon on 11/19/2020.
//

#include "Card.h"

Card::Card() = default;

Card::~Card() {

}

int Card::getSeed() const {
    return seed;
}

void Card::setSeed(int seed) {
    Card::seed = seed;
}

int Card::getNumber() const {
    return number;
}

void Card::setNumber(int number) {
    Card::number = number;
}
