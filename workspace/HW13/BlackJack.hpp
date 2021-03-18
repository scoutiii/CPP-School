#ifndef BLACKJACK_H
#define BLACKJACK_H
#include "Deck.hpp"
#include "PlayingCard.hpp"
using namespace std;

class BLACKJACK {
    private:
        //the deck to be used
        DECK deckInUse;
        //the various scores
        int playerScore;
        int dealerScore;
        //keeps track of which number in the deck they are on
        int currentCardNum = 0;
        //first and second card for player and dealer
        PLAYINGCARD player1st;
        PLAYINGCARD player2nd;
        PLAYINGCARD dealer1st;
        PLAYINGCARD dealer2nd;
        //checks if the player or dealer busted
        bool playerBusted = false;
        bool dealerBusted = false;
    public:
        BLACKJACK(); //shuffles the deck and sets scores to zero
        void playerTurn(); //lets the player stand or hit till bust
        void dealerTurn(); //has the dealer draw till 17/21
        void playBlackJack(); //actually plays the game
    
};

#endif