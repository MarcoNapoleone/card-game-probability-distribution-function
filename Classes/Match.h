//
// Created by makon on 11/20/2020.
//

#ifndef CARDGAME_MATCH_H
#define CARDGAME_MATCH_H


#include "Deck.h"

class Match {
private:
    bool result;    // true if won
    Deck deck;
public:
    bool getResult() const;
    void setResult(bool result);
    explicit Match(Deck deck);
    void playGame();

};


#endif //CARDGAME_MATCH_H
