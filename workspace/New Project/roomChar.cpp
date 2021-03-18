#include "roomChar.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

roomChar::roomChar(char givenChar, int i, int j) {
    shownChar = givenChar;
    X = j;
    Y = i;
    if(shownChar == '|') {
        canWalkOn = false;
        isTeleport = false;
        isGoal = false;
        isPlayer = false;
    }
    else if(shownChar == '@') {
        canWalkOn = true;
        isTeleport = false;
        isGoal = false;
        isPlayer = true;
    }
    else if(shownChar == ' ') {
        canWalkOn = true;
        isTeleport = false;
        isGoal = false;
        isPlayer = false;
    }
    else if(shownChar == '$') {
        canWalkOn = true;
        isTeleport = false;
        isGoal = true;
        isPlayer = false;
    }
    else if(shownChar >= 65) {
        canWalkOn = true;
        isTeleport = true;
        isGoal = false;
        isPlayer = false;
    }
    else {
        canWalkOn = false;
        isTeleport = false;
        isGoal = false;
        isPlayer = false;
    }
}

roomChar::roomChar() {
    shownChar = ' ';
    X = 0;
    Y = 0;
    canWalkOn = false;
    isTeleport = false;
    isGoal = false;
    isPlayer = false;
}

char roomChar::getChar() {
    return shownChar;
}

bool roomChar::getWalk() {
    return canWalkOn;
}

bool roomChar::isItTele() {
    if(isTeleport == true) {
        return true;
    }
    else {
        return false;
    }
}

bool roomChar::isItGoal() {
    if(isGoal == true) {
        return true;
    }
    else {
        return false;
    }
}

bool roomChar::isItPlayer() {
    if(isPlayer == true) {
        return true;
    }
    else {
        return false;
    }
}

int roomChar::getX() {
    return X;
}

int roomChar::getY() {
    return Y;
}