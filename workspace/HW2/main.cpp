//This program calculates a final percentage for 3 scores in a class
#include <iostream>
using namespace std;

int main()
{
    //defining the variables
    int homework;
    int exams;
    int recitation;
    int totalPoints;
    float yourFinalPercent;
    const int totalPossiblePoint = 475;
    
    //ask for the scores for homework exam and recitation
    cout << "This program will calculate your final percentage." << endl;
    cout << "How many points did you get on your homework? (out of 150) ";
    cin >> homework;
    cout << "How many points did you get on your exam? (out of 250) ";
    cin >> exams;
    cout << "How many points did you get in your recitation? (out of 75) ";
    cin >> recitation;
    
    //now will calulate the total points and percentage
    totalPoints = homework + exams + recitation;
    yourFinalPercent = ((homework + exams + recitation) / (float)totalPossiblePoint) * 100;
    
    //prints your total and percent and a message if applicable
    cout << "You have a total of " << totalPoints << "/475 points\n";
    cout << "Which makes your percentage: " << yourFinalPercent << "%" << endl;
    
    if (yourFinalPercent >= 94) 
    {
        cout << "Well done!! you got an A!";
    }
    
    return 0;
}