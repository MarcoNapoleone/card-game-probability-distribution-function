//
// Created by makon on 11/19/2020.
//

#ifndef CARDGAME_DECK_H
#define CARDGAME_DECK_H

#include "Card.h"
#include <stdlib.h>
#include <time.h>


class Deck {
private:
public:
    Card Cards[40];

    Deck();
    virtual ~Deck();

    void createDeck();
    void shuffleDeck();

};


#endif //CARDGAME_DECK_H
