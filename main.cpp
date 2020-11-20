#include <iostream>
#include "Classes/Deck.h"
#include "Classes/Match.h"

#define attempts 1000000

using namespace std;

int main() {

    Deck MyDeck;
    Match *MyMatch = new Match(MyDeck);
    int wonTimes = 0;

    for (int i = 0; i < attempts; i++){
        MyMatch->playGame();
        if(MyMatch->getResult()) wonTimes++;
    }

    cout<<(double)wonTimes/(double)attempts*100;
    delete MyMatch;
    return 0;
}
