#ifndef ROOMCHAR_H
#define ROOMCHAR_H

class roomChar {
  private:
    char shownChar;
    bool canWalkOn;
    bool isTeleport;
    bool isGoal;
    bool isPlayer;
    int X;
    int Y;
  public:
    roomChar(char, int, int);
    roomChar();
    char getChar();
    bool getWalk();
    bool isItTele();
    bool isItGoal();
    bool isItPlayer();
    int getX();
    int getY();
};


#endif