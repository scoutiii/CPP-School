/**************************
 * This is a mini "game", it's basically a choose your own adventure.
 * It's called Everything has changed. It's about A young adult named
 * Charles Rose. It goes through parts of his life and you get to make
 * a couple of decisions along the way. Hope you enjoy!! (first attempt at game making)
 * Scout Jarman : start (10/12/2017 - ********) 
 * ************************/
 
 /* TODO:
 * press key to continue
 * 
 */
 #include <iostream>
 #include <string>
 #include <unistd.h>
 #include <stdlib.h>
 #include <fstream>
 #include <time.h>
 #include <stdio.h>
 using namespace std;
 
  //hit any kep to continue
 void pressToCont() {
  sleep(1);
  cout << "Press any key to continue..." << endl;
  cin.get();
  
 }
 
 //title sequence
 void openingTitle() {
     cout << "Welcome to...";
     sleep(1);
    
    cout << endl;
    sleep(1);
    cout << "  ______  __        __  ______   _____    __     __                                 " << endl;     
    cout << " / _____| \\ \\      / / / _____| |  _  \\   \\ \\   / /                            " << endl;
    cout << " | |____   \\ \\    / /  | |____  | |_| |    \\ \\ / /                              " << endl;  
    cout << " | _____|   \\ \\  / /   | _____| | ___ \\     \\   /                               " << endl;     
    cout << " | |____     \\ \\/ /    | |____  | |  \\ \\     | |                                " << endl;
    cout << " |______|     \\__/     |______| |_|   \\_\\    |_|                                 " << endl;  
    sleep(1);
    cout << "  _______   __   __   _______   ___     _    ________                               " << endl;
    cout << " |__   __| |  | |  | |__   __| |   \\   | |  / _______|                             " << endl;
    cout << "    | |    |  |_|  |    | |    | |\\ \\  | |  | |   ___                             " << endl;
    cout << "    | |    |   _   |    | |    | | \\ \\ | |  | |   |  |                            " << endl;
    cout << "    | |    |  | |  |  __| |__  | |  \\ \\| |  | |____| |                            " << endl;
    cout << "    |_|    |__| |__| |_______| |_|   \\___|  |________|                             " << endl;
    sleep(1);
    cout << "  __   __        ____        _______                ____          ___           __----__   _/\\ " << endl;
    cout << " |  | |  |      /    \\      /  _____|            _/^ __ ^\\_    /~^_/ |       )/^        ^-^ _/ " << endl;
    cout << " |  |_|  |     /  /\\  \\     |  \\____          _/^ _/^  ^\\_ ^\\ | ./  /~      /(            _/\\. " << endl;
    cout << " |   _   |    /  /__\\  \\     \\_____ \\       _/^_/^--_     ^\\_^\\-__-~      _/( \\         _/  ./ " << endl;
    cout << " |  | |  |   /  ______  \\    ______\\ |    ./^_/|  \\_ ~\\      \\_^\\_      /^ _(  ~-_    _/ \\./\\  " << endl;
    cout << " |__| |__|  /__/      \\__\\   |_______/   _/^_/   \\_  ~\\ \\      ^\\__^\\../^_/^ )\\    ~~~~    _\\/ " << endl;
    cout << "                                        <__/       ~\\__\\|         ^\\.__./^      ~---____--~ ~\\ " << endl;
    sleep(1);
    cout << "  ______   __   __       ____       ___     _   ________   ______   ______          " << endl;
    cout << " /  ____| |  | |  |     /    \\     |   \\   | | / _______| / _____| |  __  \\      " << endl;
    cout << " | /      |  |_|  |    /  /\\  \\    | |\\ \\  | | | |    __  | |____  | |  \\  |   " << endl;
    cout << " | |      |   _   |   /  /__\\  \\   | | \\ \\ | | | |   |  | | _____| | |  |  |    " << endl;
    cout << " | |____  |  | |  |  /  ______  \\  | |  \\ \\| | | |____| | | |____  | |__/  |     " << endl;
    cout << " |______| |__| |__| /__/      \\__\\ |_|   \\___| |________| |______| |______/      " << endl;
    return;
 }
 
 //new page function
 void newPage() {
  system("clear");
  for(int i=0; i<=50; i++) {
  cout << "\n";}
  cout << "\033[2J\033[1;1H";

  return;
 }
 
 //tutorial
 void tutorial() {
  cout << "This is an interactive 'choose your own adventure'." << endl;
    sleep(1);
    cout << "Through out the story you'll see options to choose from." << endl;
    sleep(1);
    cout << "For example: " << endl;
    
    int Choice1;
    int Choice2;
    
    cout << "1. I think I understand how this works... " << endl;
    sleep(1);
    cout << "2. Im confused... (simply press 2 and then ENTER)" << endl;
    sleep(1);
    cin >> Choice1;
    if (Choice1 == 1) {
     cout << "Looks like you've got this figured out! Lets get started then." << endl;
     sleep(1.8);
    }
    else if (Choice1 == 2) {
     cout << "See, not too bad! All you have to do is click 1 or 2, its up to you!" << endl;
     sleep(1);
     cout << "Want to try again?" << endl;
     sleep(1);
     cout << "1.Yes" << endl;
     cout << "2.No" << endl;
     cin >> Choice2;
     if(Choice2==1) {
      cout << "Well looks like you've got it figured out! Lets party hardy." << endl;
      sleep(1);
     }
     else if(Choice2==2) {
      cout << "Yeah it's pretty simple... now lets have some fun!" << endl;
      sleep(1);
     }
     else { cout << "nice try but that doesn't work, I'll try to put in secret messages for you guys ;)" << endl;
     sleep(1.8); 
     }
    }
    else { cout << "Nice try but that doesn't work, I'll try to put in secret messages for you guys ;)" << endl;
     sleep(1); 
     cout << "All you have to do is click 1 or 2, its up to you!" << endl;
     sleep(1);
     cout << "Want to try again?" << endl;
     sleep(1);
     cout << "1.Yes" << endl;
     cout << "2.No" << endl;
     cin >> Choice2;
     if(Choice2==1) {
      cout << "Well, it looks like you've got it figured out! Lets party." << endl;
      
     }
     else if(Choice2==2) {
      cout << "Yeah it's pretty simple... now lets have some fun!" << endl;
      
     }
     else { 
     sleep(1);
     cout << "Second times a charm right?\n";
     sleep(1);
     cout << "No." << endl;
     sleep(1);
     cout << "No it is not." << endl;
     
     }
 }
 cout << "Oh and remember...there are no second chances. Once you click 1 or 2";
 cout << "...";
 cout << " there is no going back.\n\n\n" << endl;
 sleep(3);
 return;
 }
 
 //read line by line
 void showText(string fileName) {
 string text;
 ifstream fin(fileName);
 if (fin.is_open()) {
  while( getline (fin,text)) {
   cout << text << endl;
   if(text.size() <35) {
    sleep(1);
   }
   else {
    sleep(3);
   }
  }
  fin.close();
 }
 }
 
 //ch1 line by line
 void showchap(string fileName) {
 string text;
 ifstream fin(fileName);
 if (fin.is_open()) {
  while( getline (fin,text)) {
   cout << text << endl;
   sleep(1);
  }
  fin.close();
 }
 }
 
 //ch1 gets decidsion from user
 int ch1FirstChoi() {
  int CH1p1;
  cin >> CH1p1;
  if (CH1p1 == 1) {
   cout << "You chose Cynthia." << endl;
   return 1;
 }
  else if (CH1p1 == 2) {
   cout << "You chose Charlotte." << endl;
   return 2;
 }
  else {
   cout << "You aren't going to homecoming." << endl;
   return 0;
 }
 }
 
 int main() {
 openingTitle();
 sleep(2);
 tutorial();
 pressToCont();
 newPage();
 sleep(1);
 showText("CH1/EHCCH1intro.txt");
 pressToCont();
 newPage();
 sleep(1);
 showchap("ch1.txt");
 sleep(2);
 showText("CH1/EHCCH1start.txt");
 int chOne1 = ch1FirstChoi();
 sleep(1);
 newPage();
 sleep(1);
 if(chOne1 == 2) {
  showText("CH1/EHCCH1Charlotte/youPickedChar.txt");
 }
 pressToCont();
 
 
 


 
 
 
 
 
 return 0;
 }