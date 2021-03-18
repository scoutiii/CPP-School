#include "PlayingCard.hpp"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//default constructor sets card to all zero/none
PLAYINGCARD::PLAYINGCARD() {
    cardSuit = suit[0];
    cardValue = value[0];
    cardFace = face[0];
}

//a parameterized constructor to set the card to what is given
PLAYINGCARD::PLAYINGCARD(string Suit, int Value, string Face) {
    cardSuit = Suit;
    cardValue = Value;
    cardFace = Face;
}

//converts the values for the card into a string
string PLAYINGCARD::toString() {
    string of = " of ";
    string cardString = cardFace+of+cardSuit;
    return cardString;
}

//returns the value of the card
int PLAYINGCARD::getValue() {
    return cardValue;
}

//returns the suit of the card
string PLAYINGCARD::getSuit() {
    return cardSuit;
}

//returns the face of the card
string PLAYINGCARD::getFace() {
    return cardFace;
}