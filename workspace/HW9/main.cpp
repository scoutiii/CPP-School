//this is an expanded version of the simple yahtzee
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//global variable
const int numberOfRolls=7;

//This function tells the main menu how to display progress
string menuProgress(int challengeOutcome) {
    static_cast<int>(challengeOutcome);
    if(challengeOutcome == 2) {
        return "Not Attepmted\n";
    }
    if(challengeOutcome == 1) {
        return "Completed\n";
    }
    if(challengeOutcome == 0) {
        return "Failed\n";
    }
}

//This function preforms the "roll"
int roll() { 
    return rand()%6+1;
}

//This function is yahtzee
bool YAHTZEE() {
    cout << "\n\nLets play YAHTZEE!" << endl;
    cout << "The goal is to get all 5 dice the same number." << endl;
    cout << "Just enter the number you want to keep. Good Luck!" << endl;
    bool isWin = false;
    int dice[5];
    int turnNum=0;
    int numKeep;
    //initialize dice
    for (int i=0; i<5; ++i) {
        dice[i] = roll();
    }
    //starts actuall game
    while(isWin == false and turnNum < numberOfRolls) {
        //checks for yahtzee
        if(dice[0]==numKeep and dice[1]==numKeep and dice[2]==numKeep and dice[3]==numKeep and dice[4]==numKeep){
            if(turnNum<numberOfRolls) {
                cout << "Your roll..." << endl;
            for (int l=0; l<5; ++l) {
                cout << dice[l] << " ";
                }
            cout << "\nCongrations, you got a yahtzee with " << numKeep << " on roll number " << turnNum+1 << "!" << endl;
            isWin = true;
            return 1;
            }
        }

        cout << "Your roll..." << endl;
        
        //displays dice
        for (int j=0; j<5; ++j) {
            cout << dice[j] << " ";
        }
        cout << "Which number would you like to keep: ";
        cin >> numKeep;
        //validates input
        while (numKeep < 1 or numKeep > 6) {
            cout << "That input is garbage, try again." << endl;
            cout << "which number would you like ot keep: " << endl;
            cin >> numKeep;
        }
        //reroll dice
        for (int k=0; k<5; ++k) {
            if(dice[k]!=numKeep){
                dice[k] = roll();
            }
        }
        //checks for yahtzee
        turnNum+=1;
    }
    if (isWin == false) {
        cout << "Close but no good... better luck next time!" << endl;
        return 0;
    }
    
    
}

//This function is Four of a kind
bool FOUROAK() {
    cout << "\n\nLets play Four Of A Kind!" << endl;
    cout << "The goal of this game is to get four of the dice the same number." << endl;
    cout << "Its like Yahtzee but you only need four. Good Luck!" << endl;
    bool isWin = false;
    int dice[5];
    int turnNum = 0;
    int numKeep;
    int numOfNum[6];
    //initialize first roll
    for (int i=0; i<5; ++i) {
        dice[i] = roll();
    }
    //start game
    while(isWin == false and turnNum < numberOfRolls) {
        cout << "Your roll..." << endl;
        //display roll
        for(int j=0; j<5; ++j) {
            cout << dice[j] << " ";
        }
        cout << "Which number would you like to keep: ";
        cin >> numKeep;
        //validates input
        while (numKeep > 6 or numKeep < 1) {
            cout << "That input is garbage, try again." << endl;
            cout << "Which number would you like to keep: ";
            cin >> numKeep;
        }
        //reroll dice
        for(int k=0; k<5; ++k) {
            if(dice[k] != numKeep) {
                dice[k] = roll();
            }
        }
        //clears num of num
        for(int o=0; o<6; ++o) {
            numOfNum[o] = 0;
        }
        //figures out how many dice are in a certain number
        for(int m=1; m<7; ++m) {
            for(int n=0; n<5; ++n) {
                if(dice[n] == m) {
                    numOfNum[m-1]++;
                }
            }
        }
        //checks for four of a kind
        if (numOfNum[numKeep-1] >= 4) {
            if(turnNum<numberOfRolls) {
            cout << "Your roll..." << endl;
            for(int l=0; l<5; ++l) {
                cout << dice[l] << " ";
            }
            cout << "\nCongradulations, you got a FourOAK with " << numKeep << " on roll number " << turnNum+2 << "!\n";
            isWin = true;
            return 1;
            }
        }
        turnNum++;
    }
    if(isWin==false) {
        cout << "Close but not close enough, better luck next time!" << endl;
        return 0;
    }
}

//This function is straight
bool STRAIGHT() {
    cout << "\n\nLets play straight!" << endl;
    cout << "The goal is to get one of each number, reguardless of order" << endl;
    cout << "To pick which numbers to keep, do 1 for keep and 0 for reroll." << endl;
    cout << "i.e 13355, to keep the numbers already in order, input 10101." << endl;
    cout << "And remember you only have 7 rolls, good luck!!" << endl;
    cout << "If you're a real baller then you'll go for 12345 ;)" << endl;
    bool isWin = false;
    int dice[5];
    int turnNum = 0;
    int diceToKeep[5];
    string numbersToKeep;
    int sizeOfNumbersToKeep;
    int numOfNum[6];
    //initialize first roll
    for(int i=0; i<5; ++i) {
        dice[i] = roll();
    }
    //start game
    while(isWin == false and turnNum!=numberOfRolls) {
        cout << "Your roll..." << endl;
        //display roll
        for(int j=0; j<5; ++j) {
            cout << dice[j] << " ";
        }
        cout << "Which dice would you like to keep (1/0 no spaces): ";
        cin >> numbersToKeep;
        sizeOfNumbersToKeep = numbersToKeep.size();
        //validates use input
        while(sizeOfNumbersToKeep!=5) {
            cout << "This is an invalid input, please try again." << endl;
            cout << "Which dice would you like to keep (1/0 no spaces): ";
            cin.clear();
            cin >> numbersToKeep;
            sizeOfNumbersToKeep = numbersToKeep.size();
        }
        //rerolls where applicable
        for(int n=0; n<5; ++n) {
            if(numbersToKeep[n] == '0') {
                dice[n] = roll();
            }
        }
        //clears num of num
        for(int o=0; o<6; ++o) {
            numOfNum[o] = 0;
        }
        //figures how many dice per nums
        for(int m=1; m<7; ++m) {
            for(int n=0; n<5; ++n) {
                if(dice[n] == m) {
                    numOfNum[m-1]++;
                }
            }
        }
        //checks for straight
        if(numOfNum[1]==1 and numOfNum[2]==1 and numOfNum[3]==1 and numOfNum[4]==1) {
            if(numOfNum[0]==1 or numOfNum[5]==1) {
                if(turnNum<numberOfRolls) {
                    cout << "Your roll..." << endl;
                for(int m=0; m<5; ++m) {
                    cout << dice[m] << " ";
                }
                cout << "\nCongradulations you got a straight in " << turnNum+2 << " turns!!!" << endl;
                isWin = true;
                return 1;
            }
            
        }
        
    
    }
        turnNum++;
    }
    //ends after 7 rolls
    if(isWin == false) {
        cout << "Close but not close enough, better luck next time!" << endl;
        return 0;
        }
}

//This function is full house
bool FULLHOUSE() {
    cout << "\n\nLets play full house!" << endl;
    cout << "The goal of this game is to get 3 dice one number and 2 another." << endl;
    cout << "Pretty simple, but you've got 7 roll, good luck!!" << endl;
    bool isWin = false;
    int dice[5];
    int turnNum=0;
    int firstNumToKeep;
    int secondNumToKeep;
    int numOfNum[6];
    //initialize first dice roll
    for(int i=0; i<5; ++i) {
        dice[i] = roll();
    }
    //starts actual game
    while (isWin==false and turnNum<numberOfRolls) {
        cout << "Your roll..." << endl;
        
        for(int j=0; j<5; ++j) {
            cout << dice[j] << " ";
        }
        cout << "Whats the first number you would like to keep: ";
        cin >> firstNumToKeep;
        while(firstNumToKeep>6 or firstNumToKeep<1) {
            cout << "Not a valid number, try again." << endl;
            cout << "Whats the first number you would like to keep: ";
            cin >> firstNumToKeep;
        }
        cout << "Whats the second number you would like to keep: ";
        cin >> secondNumToKeep;
        while(secondNumToKeep>6 or secondNumToKeep<1) {
            cout << "Not a valid number, try again." << endl;
            cout << "Whats the second number you would like to keep: ";
            cin >> secondNumToKeep;
        }
        //clears how many dice per number
        for(int l=0; l<6; ++l) {
            numOfNum[l] = 0;
        }
        //figures how many dice per nums
        for(int m=1; m<7; ++m) {
            for(int n=0; n<5; ++n) {
                if(dice[n] == m) {
                    numOfNum[m-1]++;
                }
            }
        }
        //rerolls where applicable
        for(int k=0; k<5; ++k) {
            if(dice[k]!=firstNumToKeep and dice[k]!=secondNumToKeep) {
                dice[k] = roll();
                if(dice[k]==firstNumToKeep and numOfNum[firstNumToKeep-1]>3) {
                    dice[k] = roll();
                }
                else if(dice[k]==secondNumToKeep and numOfNum[secondNumToKeep-1]>3) {
                    dice[k] = roll();
                }
            }
        }
        //checks for full house
        if(numOfNum[firstNumToKeep-1]==3) {
            if(numOfNum[secondNumToKeep-1]==2) {
                if(turnNum<numberOfRolls) {
                cout << "Your roll..." << endl;
                for(int n=0; n<5; ++n) {
                    cout << dice[n] << " ";
                }
                cout << "\nCongradulations, you got a full house with " << firstNumToKeep << " and " <<secondNumToKeep << " in " << turnNum+1 << " turns!\n";
                isWin = true;
                return 1;
            }
        }
        
    }
        else if(numOfNum[secondNumToKeep-1]==3) {
            if(numOfNum[firstNumToKeep-1]==2) {
                if(turnNum<numberOfRolls) {
                    cout << "Your roll..." << endl;
                    for(int n=0; n<5; ++n) {
                        cout << dice[n] << " ";
                    }
                    cout << "\nCongradulations, you got a full house with " << firstNumToKeep << " and " <<secondNumToKeep << " in " << turnNum+1 << " turns!\n";
                    isWin = true;
                    return 1;
                }
            }
        }
        turnNum++;
    
    
}
    if(isWin==false) {
        cout << "Close but not close enough, try again!" << endl;
        return 0;
    }
}

int main() {
    //introductory statement
    cout << "Hello and Welcome To Yahtzee Extended Edition!!!" << endl;
    cout << "Complete all 4 challenges to win!" << endl;
    cout << "You only have 7 rolls each round so good luck!" << endl;
    
    //starts the main loop for playing again
    char playAgain = 'Y';
    srand(time(NULL));
    while(playAgain == 'Y' or playAgain == 'y') {
        //starts the menu loop
        int userChoice = 1;
        bool isGameDone = false;
        int chOne = 2;
        int chTwo = 2;
        int chThree = 2;
        int chFour = 2;
        while (isGameDone == false) {
            cout << "\n\n\n" << endl;
            cout << "1. Yahtzee (get all 5 dice the same number)............................";
            cout << menuProgress(chOne);
            cout << "2. 4 Of A Kind (like Yahtzee but with 4 instead of 5 numbers needed)...";
            cout << menuProgress(chTwo);
            cout << "3. Straight (All 5 dice in consecutive order i.e. 12345 or 23456)......";
            cout << menuProgress(chThree);
            cout << "4. Full House (3 dice one number and 2 another number).................";
            cout << menuProgress(chFour);
            cout << "5. Quit Playing" << endl;
            cout << "Play: ";
            cin >> userChoice;
            while (userChoice > 5 or userChoice < 1) {
                cout << "This is an invalid input, please try again." << endl;
                cout << "Play: ";
                cin >> userChoice;
            }
            if(userChoice == 1) {
                chOne = YAHTZEE();
            }
            if(userChoice == 2) {
                chTwo = FOUROAK();
            }
            if(userChoice == 3) {
                chThree = STRAIGHT();
            }
            if(userChoice == 4) {
                chFour = FULLHOUSE();
            }
            if(userChoice == 5) {
                cout << "Thanks for playing, please play again!" << endl;
                cout << "Produced by Catacomb Productions" << endl;
                playAgain = 'N';
                break;
            }
            if(chOne==1 and chTwo==1 and chThree==1 and chFour==1) {
                cout << "\n\n\n" << endl;
                cout << "1. Yahtzee (get all 5 dice the same number)............................";
                cout << menuProgress(chOne);
                cout << "2. 4 Of A Kind (like Yahtzee but with 4 instead of 5 numbers needed)...";
                cout << menuProgress(chTwo);
                cout << "3. Straight (All 5 dice in consecutive order i.e. 12345 or 23456)......";
                cout << menuProgress(chThree);
                cout << "4. Full House (3 dice one number and 2 another number).................";
                cout << menuProgress(chFour);
                isGameDone=true;
                cout << "Congradulations you completed all four challenges!!!" << endl;
                cout << "Want to play again? (Y/N): ";
                cin >> playAgain;
                if(playAgain != 'Y' or playAgain != 'y') {
                    cout << "Thanks for playing, please play again!" << endl;
                    cout << "Produced by Catacomb Productions" << endl;
                }
            }
        }
    }
    return 0;
}