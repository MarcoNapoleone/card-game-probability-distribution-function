//
// Created by makon on 11/19/2020.
//

#ifndef CARDGAME_CARD_H
#define CARDGAME_CARD_H


class Card {
private:
    int seed; // 0 -> oro, 1 -> spade, 2 -> coppe, 3 -> bastoni.
    int number;

public:
    virtual ~Card();
    Card();

    int getSeed() const;

    void setSeed(int seed);

    int getNumber() const;

    void setNumber(int number);
};


#endif //CARDGAME_CARD_H
