//
// Created by makon on 11/20/2020.
//

#include <iostream>
#include "Match.h"

Match::Match(Deck deck) {
    deck.shuffleDeck();
    this->deck = deck;
}

void Match::playGame() {

    deck.shuffleDeck();
    this->result = false;
    int card = 0;

    while (card <= 39) {
        //std::cout<<card<<" "<<deck.Cards[card].getNumber()<<" "<<(card%3)+1<< std::endl;
        if (deck.Cards[card].getNumber() == (card%3)+1) {
            return;
        }
        card++;
    }
    this->setResult(true);
}

bool Match::getResult() const {
    return result;
}

void Match::setResult(bool result) {
    Match::result = result;
}
