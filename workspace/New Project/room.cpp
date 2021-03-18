#include "room.hpp"
#include "roomChar.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
#include <termios.h>
using namespace std;

room::room(string fileName) {
    ifstream fin(fileName);
    for(int i=0; i<roomY; ++i) {
        getline(fin, tempRoom[i], '\n');
    }
    for(int i=0; i<roomY; ++i) {
        for(int j=0; j<roomX; ++j) {
            roomChar tempRoomChar;
            tempRoomChar = roomChar(tempRoom[i][j], i, j);
            realRoom[i][j] = tempRoomChar;
            if(realRoom[i][j].isItPlayer() == true) {
                playerX = realRoom[i][j].getX();
                playerY = realRoom[i][j].getY();
            }
            if(realRoom[i][j].isItGoal() == true) {
                goalX = realRoom[i][j].getX();
                goalY = realRoom[i][j].getY();
            }
            if(realRoom[i][j].isItTele() == true) {
                teleX.push_back(realRoom[i][j].getX());
                teleY.push_back(realRoom[i][j].getY());
            }
            if(playerX != j and playerY != i and realRoom[i][j].isItPlayer() == true) {
                cout << "somethings up with player" << endl;
            }
            if(goalX != j and goalY != i and realRoom[i][j].isItGoal() == true) {
                cout << "somethings up with goal" << endl;
            }
        }
    }
}

room::room() {
    
}

char room::getch() {
    char buf = 0;
    struct termios old = {0};
    if (tcgetattr(0, &old) < 0)
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if (tcsetattr(0, TCSANOW, &old) < 0)
        perror("tcsetattr ICANON");
    if (read(0, &buf, 1) < 0)
        perror ("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    if (tcsetattr(0, TCSADRAIN, &old) < 0)
        perror ("tcsetattr ~ICANON");
    return (buf);
}

void room::showRoom() {
    for(int i=0; i<18; ++i) {
        cout << endl;
    }
    for(int i=0; i<roomY; ++i) {
        for(int j=0; j<roomX; ++j) {
            char tempChar = realRoom[i][j].getChar();
            cout << tempChar;
        }
        cout << endl;
    }
}

int room::movePlayer() {
    showRoom();
    int origPlayerX = playerX;
    int origPlayerY = playerY;
    //realRoom[playerY][playerX] = roomChar(' ', origPlayerY, origPlayerX);
    char input;
    input = getch();
    while(input!='w' and input!='a' and input!='s' and input!='d'){
        cout << "try again: ";
        input = getch();
    }
    switch (input) {
        case 'w': {
            playerX += 0;
            playerY += -1;
            break;
        }
        case 'a': {
            playerX += -1;
            playerY += 0;
            break;
        }
        case 's': {
            playerX += 0;
            playerY += 1;
            break;
        }
        case 'd': {
            playerX += 1;
            playerY += 0;
            break;
        }
        default: {
            playerX += 0;
            playerY += 0;
            break;
        }
    }
    if(realRoom[playerY][playerX].getWalk() == true and realRoom[playerY][playerX].getChar() == ' ') {
        realRoom[origPlayerY][origPlayerX] = roomChar(' ', origPlayerY, origPlayerX);
        realRoom[playerY][playerX] = roomChar('@', playerY, playerX);
        showRoom();
    }
    else if(realRoom[playerY][playerX].getWalk() == false and thruTele == true) {
        realRoom[origPlayerY][origPlayerX] = roomChar('@', origPlayerY, origPlayerX); 
        wallAfterTele = true;
    }
    else if(realRoom[playerY][playerX].getWalk() == false) {
        realRoom[origPlayerY][origPlayerX] = roomChar(' ', origPlayerY, origPlayerX);
        playerX = origPlayerX;
        playerY = origPlayerY;
        realRoom[origPlayerY][origPlayerX] = roomChar('@', origPlayerY, origPlayerX);
        showRoom();
    }
    else if(realRoom[playerY][playerX].isItTele() == true) {
        realRoom[origPlayerY][origPlayerX] = roomChar(' ', origPlayerY, origPlayerX);
        char firstTeleTemp = realRoom[playerY][playerX].getChar();
        char secondTeleTemp;
        int secondTeleX;
        int secondTeleY;
        //for upper case teleport
        if(firstTeleTemp >= 65 and firstTeleTemp <= 90) {
            for(int i=0; i<roomY; ++i) {
                for(int j=0; j<roomX; ++j) {
                    if((realRoom[i][j].getChar()-32) == firstTeleTemp){
                        secondTeleX = j;
                        secondTeleY = i;
                    }
                }
            }
            secondTeleTemp = realRoom[secondTeleY][secondTeleX].getChar();
            playerX = secondTeleX;
            playerY = secondTeleY;
            realRoom[playerY][playerX] = roomChar('@', playerY, playerX);
            thruTele = true;
            movePlayer();
            if(wallAfterTele == false) {
               realRoom[secondTeleY][secondTeleX] = roomChar(secondTeleTemp, secondTeleY, secondTeleX); 
            }
            
        }
        //for lower case teleport
        else if(firstTeleTemp >= 97 and firstTeleTemp <= 122) {
            for(int i=0; i<roomY; ++i) {
                for(int j=0; j<roomX; ++j) {
                    if((realRoom[i][j].getChar()+32) == firstTeleTemp){
                        secondTeleX = j;
                        secondTeleY = i;
                    }
                }
            }
            secondTeleTemp = realRoom[secondTeleY][secondTeleX].getChar();
            playerX = secondTeleX;
            playerY = secondTeleY;
            realRoom[playerY][playerX] = roomChar('@', playerY, playerX);
            thruTele = true;
            movePlayer();
            if(wallAfterTele == false) {
                realRoom[secondTeleY][secondTeleX] = roomChar(secondTeleTemp, secondTeleY, secondTeleX);
            }
        }
    }
    
    
    
    
}