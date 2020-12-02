#include <iostream>
#include <fstream>
#include "Classes/Deck.h"
#include "Classes/Match.h"

//#define attempts 100000

using namespace std;

int main() {

    Deck MyDeck;
    Match *MyMatch = new Match(MyDeck);
    unsigned long int wonTimes = 0;
    long double attempts = 0;
    ofstream rawData;


    for (;;){

        rawData.open ("rawData.txt", std::ofstream::out | std::ofstream::trunc);
        MyMatch->playGame();
        if(MyMatch->getResult()) wonTimes++;
        cout<<attempts<<endl;
        rawData <<(long double)wonTimes/attempts++*100<<"%"<<endl;
        rawData.close();
    }


    delete MyMatch;
    return 0;
}
