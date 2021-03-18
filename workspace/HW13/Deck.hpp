#ifndef DECK_H
#define DECK_H
#include "PlayingCard.hpp"
using namespace std;

class DECK {
    private:
        //the deck comprised of cards
        PLAYINGCARD cards[52];
        //the various values and such for each card
        string suit[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
        int value[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        string face[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King",};
        //various const useful for for loop calculations
        const int numOfSuit = 4;
        const int numOfFace = 13;
        const int numOfValue = 10;
        const int numOfCards = 52;
    public:
        DECK(); //initialized to an unshuffled deck of cards
        void shuffleDeck(); //shuffles the deck of cards by switching the cards
        PLAYINGCARD drawCard(int); //returns the card from the deck, the number is number of cards in (starts at 0)
        void printDeck(); //displays the deck
};

#endif