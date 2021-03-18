#include "Deck.hpp"
#include "PlayingCard.hpp"
#include <iostream>
#include <string>
using namespace std;

//default constructor sets deck to a standard shuffle
DECK::DECK() {
    //loop that goes through all 52 cards
    for(int i=0; i<numOfCards; ++i) {
        //determines the face and suit
        string suits = suit[i / numOfFace];
        string faces = face[i % numOfFace];
        //determines the value based on the face
        int values;
        if(faces == face[0]) {
            values = value[9];
        }
        else if(faces == face[1]) {
            values = value[0];
        }
        else if(faces == face[2]) {
            values = value[1];
        }
        else if(faces == face[3]) {
            values = value[2];
        }
        else if(faces == face[4]) {
            values = value[3];
        }
        else if(faces == face[5]) {
            values = value[4];
        }
        else if(faces == face[6]) {
            values = value[5];
        }
        else if(faces == face[7]) {
            values = value[6];
        }
        else if(faces == face[8]) {
            values = value[7];
        }
        else if(faces == face[9]) {
            values = value[8];
        }
        else if(faces == face[10]) {
            values = value[8];
        }
        else if(faces == face[11]) {
            values = value[8];
        }
        else if(faces == face[12]) {
            values = value[8];
        }
        else {cout << "error in value" << endl;}
        cards[i] = PLAYINGCARD(suits, values, faces);
    }
}

//function to print the contents of the deck
void DECK::printDeck() {
    //goes through all 52 cards and makes it a string and displays it
    for(int i=0; i<numOfCards; ++i) {
        string fullCard = cards[i].toString();
        //includes values to check if value assignment is correct
        int val;
        val = cards[i].getValue();
        cout << fullCard << " which has a value of: " << val << endl;
    }
}

//shuffles the deck
void DECK::shuffleDeck() {
    srand(time(NULL));
    //goes through all 52 cards and switches it with a randomly selected one
    for(int i=0; i<numOfCards; ++i) {
        //creates temp variables
        int tempVal;
        string tempSuit;
        string tempFace;
        tempVal = cards[i].getValue();
        tempSuit = cards[i].getSuit();
        tempFace = cards[i].getFace();
        //creates variables based on randomly selected 
        int randPick = rand()%numOfCards;
        int randVal;
        string randSuit;
        string randFace;
        randVal = cards[randPick].getValue();
        randSuit = cards[randPick].getSuit();
        randFace = cards[randPick].getFace();
        cards[i] = PLAYINGCARD(randSuit, randVal, randFace);
        cards[randPick] = PLAYINGCARD(tempSuit, tempVal, tempFace);
    }
}

//draws a card
PLAYINGCARD DECK::drawCard(int drawNum) {
    return cards[drawNum];
}