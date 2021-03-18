#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <vector>
#include "roomChar.hpp"
using namespace std;

class room {
  private:
    static const int roomY = 20;
    static const int roomX = 50;
    string tempRoom[roomY];
    roomChar realRoom[roomY][roomX];
    vector<int> teleX;
    vector<int> teleY;
    int playerX;
    int playerY;
    int goalX;
    int goalY;
    bool thruTele = false;
    bool wallAfterTele = false;
  public:
    room(string);
    room();
    char getch();
    void showRoom();
    int movePlayer();
  
    
    
    
};



#endif