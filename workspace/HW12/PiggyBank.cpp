//these are the functions of the class piggy bank i think
#include "PiggyBank.hpp"
#include <iostream>
using namespace std;

//default constructor
PiggyBank::PiggyBank() {
    isBroken = false; 
    savings = 0.0;
}

//parameter constructor
PiggyBank::PiggyBank(double initialSavings) {
    savings = initialSavings; 
    isBroken = false;
}

//gets savings
double PiggyBank::getSavings() {
    return savings;
}

//deposits money into piggy bank
bool PiggyBank::depositMoney(double money) {
    if (isBroken == true or money < 0) {
        return false;
    }
    else {
        savings = savings + money;
        return true;
    }
}

//breaks the piggy bank and returns the money
double PiggyBank::smash() {
    double tempSavings = savings;
    isBroken = true;
    savings = 0.0;
    return tempSavings;
}

//destructor
PiggyBank::~PiggyBank() {
    if(isBroken == true) {
        cout << "Poor Broken Pig!" << endl;
    }
}