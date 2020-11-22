#include <iostream>
#include "Classes/Deck.h"
#include "Classes/Match.h"

//#define attempts 100000

using namespace std;

int main() {

    Deck MyDeck;
    Match *MyMatch = new Match(MyDeck);
    int wonTimes = 0;
    double attempts = 0;

    for (;;){

        MyMatch->playGame();
        if(MyMatch->getResult()) wonTimes++;
        cout<<(double)wonTimes/attempts++*100<<endl;
    }


    delete MyMatch;
    return 0;
}
