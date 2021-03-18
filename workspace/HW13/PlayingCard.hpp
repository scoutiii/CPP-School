#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H
#include <string>
using namespace std;

class PLAYINGCARD {
    private:
        //various values to be used in card creation
        string suit[5] = {"None", "Diamonds", "Spades", "Clubs", "Hearts"};
        int value[11] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        string face[14] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King",};
        //the cards values
        string cardSuit;
        int cardValue;
        string cardFace;
    public:
        PLAYINGCARD(); //initialize to all zero/none
        PLAYINGCARD(string, int, string); //sets card to what ever is give
        string toString(); //returns the string name of the card
        int getValue(); //gives the value of the card
        string getSuit(); //gives the suit of the card
        string getFace(); //gives the face of the card
}; 

#endif