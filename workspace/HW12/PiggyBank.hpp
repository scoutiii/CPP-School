//dont forget the #indef or what ever
#ifndef PiggyBank_H
#define PiggyBank_H

class PiggyBank {
private:
    bool isBroken;
    double savings;
public:
    PiggyBank();
    PiggyBank(double initialSavings);
    double getSavings();
    bool depositMoney(double money);
    double smash();
    ~PiggyBank();
};

#endif