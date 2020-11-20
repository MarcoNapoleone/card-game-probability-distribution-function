//
// Created by makon on 11/19/2020.
//

#include "Deck.h"

Deck::Deck(){
    this->createDeck();
}

Deck::~Deck() = default;

void Deck::createDeck() {
    for(int i = 0; i < 4; i++ ) {
        for (int j = 0; j < 10; j++) {
            this->Cards[j + (10 * i)].setSeed(i);
            this->Cards[j + (10 * i)].setNumber(j+1);
        }
    }
}


void Deck::shuffleDeck(){
    srand (time(nullptr));
    int range = rand()%40;
    for(int i = 0; i < range + 40; i++){
        Card tmpCard;
        int randomCardPos = rand()%39;
        tmpCard = this->Cards[i%39];
        this->Cards[i%39] = this->Cards[randomCardPos];
        this->Cards[randomCardPos]= tmpCard;
    }
}
