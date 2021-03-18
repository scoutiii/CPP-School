/*****
This is a caeser cipher program that will take in an encoded file
and create a new file with all possible outputs
*****/
#include <iostream>
#include <fstream>
using namespace std;

//this function checks if a character is upper case
bool isUpper(char character) {
    if (character >= 65 and character <= 90 ) { 
    return true; }
    else return false;
}

//this function checks if a character is lower case
bool isLower(char character) {
    if (character >= 97 and character <= 122 ) {
    return true; }
    else return false;
}

//this function rotates the letter according to the offset
char rotate(char character, int offSet) {
    int codedCharacter;
    if (isUpper(character) == false and isLower(character) == false) {
        codedCharacter = character;
        return codedCharacter;
    }
    else if (isUpper(character) == true) {
        codedCharacter = character + offSet;
        if (codedCharacter > 90) {
            codedCharacter = character - (26 - offSet);
            return codedCharacter;
        }
        return codedCharacter;
    }
    else if (isLower(character) == true) {
        codedCharacter = character + offSet;
        if (codedCharacter > 122) {
            codedCharacter = character - (26 - offSet);
            return codedCharacter;
        }
        return (char)codedCharacter;
    }
    
    
}


int main() {
    //define some variable used in the while loop
    int offSet = 0;
    char character;
    char newCharacter;
    
    //while loop that takes from file and decodes it
    while (offSet < 26) {
        ifstream fin("mystery.txt");
        cout << "=========" << endl;
        cout << "offSet: " << offSet << endl;
        while (fin.get(character) and !fin.eof()) {
            newCharacter = rotate(character, offSet);
            cout << newCharacter;
        }
        cout << endl;
        cout << "=========" << endl;
        fin.close();
        offSet++;
    }
    
    
    return 0;
    
}