//This is a Virtual Vending Machine     2(2)12(2)35
#include <iostream>
#include <iomanip>
using namespace std;

//This is the main menu function
int MainMenu() {
    int selection;
    cout << "\n\n\n------Main Menu------" << endl;
    cout << "1. Insert Money" << endl;
    cout << "2. Buy Soda" << endl;
    cout << "3. Print Status" << endl;
    cout << "4. Restock Machine" << endl;
    cout << "5. Exit" << endl;
    cout << "Selection: ";
    cin >> selection;
    return selection;
}

//option one function ie users money
float UsersBankfunc() {
    float OptionOneInput;
    cout << "how much money would you like to add?: ";
    cin >> OptionOneInput;
    if (OptionOneInput<=0) {
        cout << "This input is garbage! Please try again." << endl;
    }
    else return OptionOneInput;
}

//This is the Soda Menu
int SodaMenu() {
    int selection;
    cout << "\n\n\n------Soda Menu------" << endl;
    cout << "1. Pepsi" << endl;
    cout << "2. Mountain Dew" << endl;
    cout << "3. Aquafina" << endl;
    cout << "4. Cancel" << endl;
    cout << "Selection: ";
    cin >> selection;
    return selection;
}

//This is option 3 function ie status
void CurrentStatus(int Pepsi,int MountainDew,int Aquafina,float UsersBank,float VVMBank) {
    cout << "\n\n\n------STATUS REPORT------" << endl;
    cout << "Pepsi inventory: " << Pepsi << " bottles left" << endl;
    cout << "Mountain Dew inventory: " << MountainDew << " bottles left" << endl;
    cout << "Aquafina inventory: " << Aquafina << " bottles left" << endl;
    cout << "The user has $" << UsersBank << " left." << endl;
    cout << "There is $" << VVMBank << " in the VVM Bank." << endl;
    return;
}

int main() {
    //introductory message
    cout << "Hello and welcome to the virtual vending machine!" << endl;
    
    //define some variables and anything else needed
    int Pepsi = 5; 
    int MountainDew = 5;
    int Aquafina = 5;
    float UsersBank = 0.0;
    float VVMBank = 0.0;
    int MMSelection = 1;
    int SMSelection;
    float OptionOneInput;
    
    //goes to main menu
    
    
    //logic for the menu/does what needs to be done
    while (MMSelection>=1 and MMSelection<5 ) {
        MMSelection = MainMenu();
        if (MMSelection == 1) {
        cout << "You selected option 1." << endl;
        UsersBank = UsersBank + UsersBankfunc();
        cout<<"Your balance is $"<<fixed<<setprecision(2)<<UsersBank<<endl;
        cout << "Taking you back to the main menu." << endl;
    }
        else if (MMSelection == 2) {
        cout << "You selected option 2, pick a soda." << endl;
        SMSelection = SodaMenu();
        
        if (SMSelection == 1) {
            
            if (Pepsi == 0) {
                cout << "Sorry, there is no more Pepsi." << endl; 
            }
            else if (UsersBank<=1.49){
                cout << "Sorry, insufficient funds." << endl;
            }
            else {
                cout << "Enjoy your Pepsi!" << endl;
                UsersBank = UsersBank - 1.50;
                VVMBank = VVMBank + 1.50;
                Pepsi--;
            }
            
        }
        
        else if (SMSelection == 2) {
            
            if (MountainDew == 0) {
                cout << "Sorry, there is no more Mountain Dew." << endl; 
            }
            else if (UsersBank<=1.49){
                cout << "Sorry, insufficient funds." << endl;
            }
            else {
                cout << "Enjoy your Mountain Dew!" << endl;
                UsersBank = UsersBank - 1.50;
                VVMBank = VVMBank + 1.50;
                MountainDew--;
            }
            
        }
        
        else if (SMSelection == 3) {
            
            if (Aquafina == 0) {
                cout << "Sorry, there is no more Aquafina." << endl; 
            }
            else if (UsersBank<=1.49){
                cout << "Sorry, insufficient funds." << endl;
            }
            else {
                cout << "Enjoy your Aquafina!" << endl;
                UsersBank = UsersBank - 1.50;
                VVMBank = VVMBank + 1.50;
                Aquafina--;
            }
            
        }
        
        else if (SMSelection == 4) {
            cout << "Taking you back to the main menu." << endl; 
        }
        else {
            cout << "This input is garbage! Please try again." << endl;
        }
    }
        else if (MMSelection == 3) {
        cout << "You selected option 3" << endl;
        CurrentStatus(Pepsi, MountainDew, Aquafina, UsersBank, VVMBank);
    }
        else if (MMSelection == 4) {
        cout << "You selected option 4." << endl;
        Pepsi = 5;
        MountainDew = 5;
        Aquafina = 5;
        VVMBank = 0.0;
        cout << "All drinks have been stocked to 5, and the bank has been emptied." << endl;
        cout << "Taking you back to main menu." << endl;
    }
        else if (MMSelection == 5) {
        cout << "You selected option 5." << endl;
        cout << "Thanks for using the Virtual Vending Machine!" << endl;
        cout << "Have a nice day :)" << endl;
        break;
    } 
        else  {
            cout << "This input is garbage! Please try again." << endl;
            MMSelection = 1;
        }
    }
    
    return 0;
    
}