//This is a simple yahtzee game
#include <iostream>
using namespace std;

//roll function
int roll() {
    return rand()%6+1;
}

//function that tests for yahtzee
bool YAHTZEE(int dice0, int dice1,int dice2,int dice3,int dice4, int keepNum, int turnNum) {
    if (dice0==keepNum and dice1==keepNum and dice2==keepNum and dice3==keepNum and dice4==keepNum) {
        cout << "Your roll... " << endl;
        cout << dice0 << " " << dice1 << " " << dice2 << " " << dice3 << " " << dice4 << " " << endl;
        cout << "Congradulations you got a YAHTZEE with " << keepNum << " in " << turnNum << " turns!" << endl;
        return true;
    }
    else {
        return false;
    }
}

int main() {
    //Introductory statement
    cout << "Welcome to yahtzee, the goal is to get all of one number." << endl;
    cout << "which ever number you want just enter that value, enjoy!" << endl;
    
    //dice array and seed rand
    int dice[5];
    srand(time(NULL));
    
    //loop to keep game running if wanted
    char contPlay = 'Y';
    while (contPlay == 'Y' or contPlay == 'y') {
        //intialize dice
        for(int i=0; i<5; ++i) {
            dice[i] = roll();
        }
        
        //the actual game part
        bool isYahtzee = false;
        int turnNum = 0;
        while (isYahtzee == false) {
            cout << "Your roll... " << endl;
            ++turnNum;
            for(int i=0; i<5; ++i) {
                cout << dice[i] << " ";
            }
            cout << "Which number would you like to keep?: ";
            int keepNum;
            cin >> keepNum;
            while (keepNum<1 or keepNum>6) {
                cout << "Not a valid number, pick another one: ";
                cin >> keepNum;
            }
            for(int i=0; i<5; ++i) {
                if (dice[i]!=keepNum) {
                    dice[i] = roll();
                }
            }
            
            isYahtzee = YAHTZEE(dice[0],dice[1],dice[2],dice[3],dice[4],keepNum,turnNum);
        }
        cout << "Want to continue? (Y/N): ";
        cin >> contPlay;
        
    }
    return 0;
}