//this program takes info from a file and
//grades it and totals it for a final grade
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //define variables and more
    const int totalPossibleHW = 100;
    const int totalPossibleExams = 250;
    const int totalPossibleRec = 50;
    const int grandTotalPoint = 400;
    float HW1, HW2, HW3, HW4, HW5, HW6, HW7, HW8, HW9, HW10;
    float Exam1, Exam2;
    float rec;
    float hwTotal;
    float examTotal;
    float recTotal;
    float hwPercent;
    float examPercent;
    float recPercent;
    float grandTotalPercent;
    char letterGrade;
    //tells the user about the program
    cout << "For this program to work, please enter 10 homework ";
    cout << "scores, two exam scores (first out of 100, second out of 150) ";
    cout << "and a recitation score, into the scores.txt file." << endl;
    
    //gathers data from scores.txt and totals them and finds the percent
    //and prints the percent to user
    ifstream fin("scores.txt");
    fin >> HW1 >> HW2 >> HW3 >> HW4 >> HW5 >> HW6 >> HW7 >> HW8 >> HW9 >> HW10;
    fin >> Exam1 >> Exam2 >> rec;
    hwTotal = HW1 + HW2 + HW3 + HW4 + HW5 + HW6 + HW7 + HW8 + HW9 + HW10;
    examTotal = Exam1 + Exam2;
    recTotal = rec;
    hwPercent = (hwTotal / totalPossibleHW) * 100;
    examPercent = (examTotal / totalPossibleExams) * 100;
    recPercent = (recTotal / totalPossibleRec) * 100;
    grandTotalPercent = ((hwTotal + examTotal + recTotal) / grandTotalPoint) * 100;
    cout << "Your homework has " << hwTotal << " points for "; 
    cout << hwPercent << "%." << endl;
    cout << "Your exams total " << examTotal << " points for "; 
    cout << examPercent << "%." << endl;
    cout << "Your recitation is " << recTotal << " points for "; 
    cout << recPercent << "%." << endl;
    cout << "And your percent in the class is " << grandTotalPercent;
    cout << "%." << endl;
    
    //now finds the letter grade and prints it with a message
    if(grandTotalPercent >= 94) {
        letterGrade = 'A';
        cout << "Good job, thats an " << letterGrade << "!!!" << endl;
    }
    else if(grandTotalPercent >= 84) {
        letterGrade = 'B';
        cout << "Good job, thats an " << letterGrade << "!!!" << endl;
    }
    else if(grandTotalPercent >= 74) {
        letterGrade = 'C';
        cout << "Good job, thats an " << letterGrade << "!!!" << endl;
    }
    else if(grandTotalPercent >= 64) {
        letterGrade = 'D';
        cout << "Good job, thats an " << letterGrade << "!!!" << endl;
    }
    else if(grandTotalPercent < 63) {
        letterGrade = 'F';
        cout << "Good job, thats an " << letterGrade << "!!!" << endl;
    }
    
    
    return 0;
}