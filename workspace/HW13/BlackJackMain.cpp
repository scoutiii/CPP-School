//the main file to run the blackjack game
#include <iostream>
#include "PlayingCard.hpp"
#include "Deck.hpp"
#include "BlackJack.hpp"
using namespace std;

int main() {
    //starts of with welcome message
    cout << "Welcome to BlackJack!" << endl;
    cout << "Rules are simple, try to get to 21 with out going over." << endl;
    cout << "Good Luck!" << endl << endl;
    
    //initialize variable to start loop
    char input = 'y';
    while(input == 'y' or input == 'Y') {
        //game basically starts
        cout << endl;
        BLACKJACK theGame;
        theGame.playBlackJack();
        //after game asks if use wants to play again
        cout << "\nWant to play again? y/n: \n";
        cin >> input;
        //validates the inuput
        while(input != 'Y' and input != 'y' and input != 'n' and input != 'N') {
            cout << "Invalid input. y/n: ";
            cin >> input;
        }
    }
    //ending message
    cout << "\nThanks for playing, please come again!" << endl;
    
    
    
    return 0;
}