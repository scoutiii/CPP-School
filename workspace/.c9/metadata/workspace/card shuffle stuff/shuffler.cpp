{"filter":false,"title":"shuffler.cpp","tooltip":"/card shuffle stuff/shuffler.cpp","undoManager":{"mark":3,"position":3,"stack":[[{"start":{"row":0,"column":0},"end":{"row":58,"column":1},"action":"insert","lines":["#include<iostream>","#include <iomanip>","#include <string>","","using namespace std;","","void printCards(int* cards, const int SIZE);","void shuffle(int* cards, const int SIZE);","","int main() {","    srand(time(NULL));","    ","    const int NUM_OF_CARDS = 52;","    ","    int cards[NUM_OF_CARDS];","    ","    for (int i = 0; i < NUM_OF_CARDS; ++i){","        cards[i] = i;","    }","    ","    printCards(cards, NUM_OF_CARDS);","    cout << endl;","    ","    shuffle(cards, NUM_OF_CARDS);","    ","    printCards(cards, NUM_OF_CARDS);","    cout << endl;","    ","    return 0;","}","","void printCards(int* cards, const int SIZE) {","    const int NUM_OF_SUITS = 4;","    const int NUM_OF_FACES = 13;","    ","    string suits[NUM_OF_SUITS] = {\"HEARTS\", \"DIAMONDS\", \"SPADES\", \"CLUBS\"};","    string faces[NUM_OF_FACES] = {\"ACE\", \"2\", \"3\", \"4\", \"5\", \"6\", \"7\", \"8\", \"9\", \"10\", \"JACK\", \"QUEEN\", \"KING\"};","    ","    string face;","    string suit;","    ","    for (int i = 0; i < SIZE; ++i) {","        suit = suits[cards[i] / NUM_OF_FACES];","        face = faces[cards[i] % NUM_OF_FACES];","        cout << left << setw(5) << face << \" of \" << suit << endl;","    }","}","","void shuffle(int* cards, const int SIZE) {","    int r;","    int temp;","    ","    for (int i = 0; i < SIZE; ++i){","        temp = cards[i];","        r = rand() % (SIZE);","        cards[i] = cards[r];","        cards[r] = temp;","    }","}"],"id":1}],[{"start":{"row":0,"column":8},"end":{"row":0,"column":9},"action":"insert","lines":[" "],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":58,"column":1},"action":"remove","lines":["#include <iostream>","#include <iomanip>","#include <string>","","using namespace std;","","void printCards(int* cards, const int SIZE);","void shuffle(int* cards, const int SIZE);","","int main() {","    srand(time(NULL));","    ","    const int NUM_OF_CARDS = 52;","    ","    int cards[NUM_OF_CARDS];","    ","    for (int i = 0; i < NUM_OF_CARDS; ++i){","        cards[i] = i;","    }","    ","    printCards(cards, NUM_OF_CARDS);","    cout << endl;","    ","    shuffle(cards, NUM_OF_CARDS);","    ","    printCards(cards, NUM_OF_CARDS);","    cout << endl;","    ","    return 0;","}","","void printCards(int* cards, const int SIZE) {","    const int NUM_OF_SUITS = 4;","    const int NUM_OF_FACES = 13;","    ","    string suits[NUM_OF_SUITS] = {\"HEARTS\", \"DIAMONDS\", \"SPADES\", \"CLUBS\"};","    string faces[NUM_OF_FACES] = {\"ACE\", \"2\", \"3\", \"4\", \"5\", \"6\", \"7\", \"8\", \"9\", \"10\", \"JACK\", \"QUEEN\", \"KING\"};","    ","    string face;","    string suit;","    ","    for (int i = 0; i < SIZE; ++i) {","        suit = suits[cards[i] / NUM_OF_FACES];","        face = faces[cards[i] % NUM_OF_FACES];","        cout << left << setw(5) << face << \" of \" << suit << endl;","    }","}","","void shuffle(int* cards, const int SIZE) {","    int r;","    int temp;","    ","    for (int i = 0; i < SIZE; ++i){","        temp = cards[i];","        r = rand() % (SIZE);","        cards[i] = cards[r];","        cards[r] = temp;","    }","}"],"id":3},{"start":{"row":0,"column":0},"end":{"row":58,"column":1},"action":"insert","lines":["#include<iostream>","#include <iomanip>","#include <string>","","using namespace std;","","void printCards(int* cards, const int SIZE);","void shuffle(int* cards, const int SIZE);","","int main() {","    srand(time(NULL));","    ","    const int NUM_OF_CARDS = 52;","    ","    int cards[NUM_OF_CARDS];","    ","    for (int i = 0; i < NUM_OF_CARDS; ++i){","        cards[i] = i;","    }","    ","    printCards(cards, NUM_OF_CARDS);","    cout << endl;","    ","    shuffle(cards, NUM_OF_CARDS);","    ","    printCards(cards, NUM_OF_CARDS);","    cout << endl;","    ","    return 0;","}","","void printCards(int* cards, const int SIZE) {","    const int NUM_OF_SUITS = 4;","    const int NUM_OF_FACES = 13;","    ","    string suits[NUM_OF_SUITS] = {\"HEARTS\", \"DIAMONDS\", \"SPADES\", \"CLUBS\"};","    string faces[NUM_OF_FACES] = {\"ACE\", \"2\", \"3\", \"4\", \"5\", \"6\", \"7\", \"8\", \"9\", \"10\", \"JACK\", \"QUEEN\", \"KING\"};","    ","    string face;","    string suit;","    ","    for (int i = 0; i < SIZE; ++i) {","        suit = suits[cards[i] / NUM_OF_FACES];","        face = faces[cards[i] % NUM_OF_FACES];","        cout << left << setw(5) << face << \" of \" << suit << endl;","    }","}","","void shuffle(int* cards, const int SIZE) {","    int r;","    int temp;","    ","    for (int i = 0; i < SIZE; ++i){","        temp = cards[i];","        r = rand() % (SIZE);","        cards[i] = cards[r];","        cards[r] = temp;","    }","}"]}],[{"start":{"row":0,"column":8},"end":{"row":0,"column":9},"action":"insert","lines":[" "],"id":4}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":0,"column":9},"end":{"row":0,"column":9},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1511201284843,"hash":"78f805c9989c8dde038ca11963655e21d2b9191d"}