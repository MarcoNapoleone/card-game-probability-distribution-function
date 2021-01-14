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
    ofstream rawData;


    for (int i = 0; i < 100; i++){
        rawData.open ("rawData.txt", std::ofstream::out | std::ofstream::app);
        for(int j = 0; j < 10000; j++) {
            MyMatch->playGame();
            if (MyMatch->getResult()) wonTimes++;
        }
        rawData <<(long double)wonTimes/10000.000<<endl;
        rawData.close();
        cout<<i+1<<"# "<<wonTimes<<"/10000= "<< wonTimes/10000.000<<endl;
        wonTimes = 0;
    }


    delete MyMatch;
    return 0;
}
