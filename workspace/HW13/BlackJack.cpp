#include "BlackJack.hpp"
#include "Deck.hpp"
#include "PlayingCard.hpp"
#include <iostream>
#include <string>
using namespace std;

//default constructor shuffles the deck and sets scores to zero
BLACKJACK::BLACKJACK() {
    srand(time(NULL));
    //shuffles the deck
    deckInUse.shuffleDeck();
    //sets need variables to zero/false
    playerScore = 0;
    dealerScore = 0;
    currentCardNum = 0;
    playerBusted = false;
    dealerBusted = false;
}

//lets the player play till they want to stop or get 21
void BLACKJACK::playerTurn() {
    //checks if you start with black jack
    if(playerScore == 21) {
        cout << "\nYou got 21/BlackJack!" << endl;
        playerBusted = false;
    }
    //for anything else besides black jack
    else {
        cout << "\nWould you like to hit? y/n: ";
        char input;
        cin >> input;
        //validates user input
        while(input != 'Y' and input != 'y' and input != 'n' and input != 'N') {
            cout << "Invalid response. y/n: \n";
            cin >> input;
        }
        //the main loop that allows you to keep drawing
        if(input == 'y' or input == 'Y') {
            while((input == 'y' or input == 'Y') and playerScore < 21) {
                PLAYINGCARD nextDraw;
                nextDraw = deckInUse.drawCard(currentCardNum%52);
                currentCardNum++;
                int newCardVal;
                newCardVal = nextDraw.getValue();
                playerScore += newCardVal;
                string newCardString;
                newCardString = nextDraw.toString();
                cout << "\nYour next card is: " << newCardString << endl;
                //if you get a black jack
                if(playerScore == 21) {
                    cout << "Your current score: " << playerScore << endl;
                    cout << "You got 21/BlackJack!\n" << endl;
                    input = 'n';
                    playerBusted = false;
                    break;
                }
                //if you bust
                else if(playerScore > 21) {
                    cout << "\nYour current score: " << playerScore << endl;
                    cout << "You went over 21/busted!" << endl;
                    input = 'n';
                    playerBusted = true;
                    break;
                }
                //if you keep going
                else {
                    playerBusted = false;
                    cout << "\nYour current score: " << playerScore << endl;
                    cout << "Would you like to hit? y/n: \n";
                    input;
                    cin >> input;
                    while(input != 'Y' and input != 'y' and input != 'n' and input != 'N') {
                        cout << "Invalid response. y/n: ";
                        cin >> input;
                    }
                }
            
            }
        }
    }
    
}

//this has the dealer draw till 17 or 21
void BLACKJACK::dealerTurn() {
    //if the dealer starts with blackjack
    if(dealerScore == 21) {
        dealerBusted = false;
    }
    //for anything else besides blackjack
    else {
        //the main loop that will keep drawing untill 17/21
        if(dealerScore < 21) {
            while(dealerScore < 17) {
                PLAYINGCARD nextDraw;
                nextDraw = deckInUse.drawCard(currentCardNum%52);
                currentCardNum++;
                int newCardVal;
                newCardVal = nextDraw.getValue();
                dealerScore += newCardVal;
                dealerBusted = false;
                string dealerCard;
                dealerCard = nextDraw.toString();
                cout << "\nThe dealers next card was: " << dealerCard << endl;
                if(dealerScore > 21) {
                    cout << "The dealer busted!\n" << endl;
                    dealerBusted = true;
                    break;
                }
            }
        }
    }
    
}

//this actually plays the game
void BLACKJACK::playBlackJack() {
    //gets the players cards
    player1st = deckInUse.drawCard(currentCardNum%52);
    currentCardNum++;
    player2nd = deckInUse.drawCard(currentCardNum%52);
    currentCardNum++;
    string playerFirstCard = player1st.toString();
    string playerSecondCard = player2nd.toString();
    
    cout << "Your first two cards are: " << endl;
    cout << playerFirstCard << " and " << playerSecondCard << endl;
    
    //gets the dealers cards
    dealer1st = deckInUse.drawCard(currentCardNum%52);
    currentCardNum++;
    dealer2nd = deckInUse.drawCard(currentCardNum%52);
    currentCardNum++;
    string dealerFirstCard = dealer1st.toString();
    string dealerSecondCard = dealer2nd.toString();
    
    cout << "The dealers first card is: " << dealerFirstCard << endl;
    int dealerFirstValue = dealer1st.getValue();
    int dealerSecondValue = dealer2nd.getValue();
    int playerFirstValue = player1st.getValue();
    int playerSecondValue = player2nd.getValue();
    playerScore = playerFirstValue + playerSecondValue;
    dealerScore = dealerFirstValue + dealerSecondValue;
    
    cout << "Your current score: " << playerScore << endl;
    
    //does logic to let player draw or not
    if (playerScore <= 21) {
        playerTurn();
    }
    else if(playerScore > 21) {
        cout << "You Busted!" << endl;
        playerBusted = true;
    }
    //does logic to let dealer draw or not
    if(playerBusted == false and playerScore < 21) {
        dealerTurn();
    }
    else if(playerBusted == true and dealerScore <= 21) {
        dealerBusted = false;
    }
    cout << "The dealers other card was: " << dealerSecondCard << endl;
    
    //the logic to determine who wins
    if(playerBusted == false and dealerBusted == true) {
        cout << "Final scores, Player: " << playerScore << " Dealer: " << dealerScore << endl;
        cout << "You win!" << endl;
    }
    else if(playerScore == dealerScore) {
        cout << "Final scores, Player: " << playerScore << " Dealer: " << dealerScore << endl;
        cout << "Looks like a tie/push." << endl;
    }
    else if(playerBusted == false and dealerBusted == false) {
        if(playerScore > dealerScore) {
            cout << "Final scores, Player: " << playerScore << " Dealer: " << dealerScore << endl;
            cout << "You win!" << endl;
        }
        else if(playerScore < dealerScore) {
            cout << "Final scores, Player: " << playerScore << " Dealer: " << dealerScore << endl;
            cout << "Dealer wins!" << endl;
        }
    }
    else {
        cout << "Final scores, Player: " << playerScore << " Dealer: " << dealerScore << endl;
        cout << "Dealer wins!" << endl;
    }
}