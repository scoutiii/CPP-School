//This is the main program file for piggy bank
#include <iostream>
#include "PiggyBank.hpp"
using namespace std;

//prints current savings
bool ShowCurrentSavings(PiggyBank& inst) {
    if (double Currentsavings = inst.getSavings() ) {
        cout << "Current savings: $ ";
        cout << Currentsavings;
        cout << endl << endl;
        return true;
    }
    else {
        cout << "Failure to get savings" << endl;
        return false;
    }
    
}

//despoist money
bool DepositMoney(PiggyBank& inst, double depoMoney) {
    if (inst.depositMoney(depoMoney)) {
        cout << "Successfully deposited $ " << depoMoney << endl << endl;
        return true;
    }
    else {
        cout << "Failure to deposit money" << endl;
        return false;
    }
}

//shmashes the piggy bank
bool SmashPiggyBank(PiggyBank& inst) {
    if(double finalAmount = inst.smash()) {
        cout << "Final amount in piggy bank: $ ";
        cout << finalAmount;
        cout << endl << endl;
        return true;
    }
    else {
        cout << "Failure to smash piggy bank\n" << endl;
        return false;
    }
}


int main() {
    //first piggy bank
    cout << "First piggy bank." << endl;
    PiggyBank firstInst;
    //the first deposit
    double firstInst_firstDeposit = 142.42;
    //deposits the first amount into the first bank
    DepositMoney(firstInst, firstInst_firstDeposit);
    //shows the first bank after first deposit
    ShowCurrentSavings(firstInst);
    //the second deposit amount
    double firstInst_secondDeposit = 0.01;
    //deposit the second amount into the first bank
    DepositMoney(firstInst, firstInst_secondDeposit);
    //shows the first bank after the second deposit
    ShowCurrentSavings(firstInst);
    //the third depoist amount
    double firstInst_thirdDeposit = -10.00;
    //deposit third amount into the first bank
    DepositMoney(firstInst, firstInst_thirdDeposit);
    cout << "Can't deposit negative money." << endl;
    //shows the first bank after third deposit
    ShowCurrentSavings(firstInst);
    //smash that shit
    double firstInst_finalAmount;
    firstInst_finalAmount = SmashPiggyBank(firstInst);
    //attempt to deposit more money
    double firstInst_fourthAmount = 5.00;
    DepositMoney(firstInst, firstInst_fourthAmount);
    cout << "Can't deposit money in a broken piggy bank." << endl;
    //shows first bank after smash
    ShowCurrentSavings(firstInst);
    cout << "Can't get money from a broken piggy bank, $0.00" << endl;
    
    //second piggy bank
    cout << "Second piggy bank." << endl;
    PiggyBank secondInst = PiggyBank(100.00);
    //shows the second bank after initialization
    ShowCurrentSavings(secondInst);
    //the second deposit amount
    double secondInst_secondDeposit = 150.00;
    //deposit the second amount into the second bank
    DepositMoney(secondInst, secondInst_secondDeposit);
    //shows the second bank after the second deposit
    ShowCurrentSavings(secondInst);
    
    return 0;
}