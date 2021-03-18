//This program takes a user specified size and colors
//and makes a ppm file that smooshes them together
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int correctColor(int a){
    if (a > 255) return 255;
    if (a < 0) return 0;
    return a;
}

int main() {
    //introductory statements
    cout << "Hello and welcome to the color smoosher!" << endl;
    
    //gets specifications for left color and checks and corrects values
    cout << "Please enter the left color (ex: 255 255 0 and hit enter after each number)." << endl;
    float leftColor1, leftColor2, leftColor3;
    cin >> leftColor1;
    cin >> leftColor2;
    cin >> leftColor3;
    leftColor1 = correctColor(leftColor1);
    leftColor2 = correctColor(leftColor2);
    leftColor3 = correctColor(leftColor3);
    
    //gets specifications for right color and checks and corrects values
    cout << "Please enter the right color (ex: 200 0 125 and hit enter after each number)." << endl;
    float rightColor1, rightColor2, rightColor3;
    cin >> rightColor1;
    cin >> rightColor2;
    cin >> rightColor3;
    rightColor1 = correctColor(rightColor1);
    rightColor2 = correctColor(rightColor2);    
    rightColor3 = correctColor(rightColor3);
    
    //gets height of picture
    cout << "Please enter height in pixels: ";
    float  pixelHeight;
    cin >> pixelHeight;
    
    //gets width of picture
    cout << "Please enter width in pixels: ";
    float pixelWidth;
    cin >> pixelWidth;
    
    //gets file name 
    cout << "Please enter a file name .ppm (ex: example.ppm): ";
    string fileName;
    cin >>  fileName;
    
    //starts to format and output to file
    ofstream fout(fileName);
    fout << "P3" << endl;
    fout << pixelWidth << " " << pixelHeight << endl;
    fout << 255 << endl;

    for (int i=0; i<pixelHeight; i++) {
        float inc1 = (static_cast<float>(rightColor1 - leftColor1)/static_cast<float>(pixelWidth));
        float inc2 = (static_cast<float>(rightColor2 - leftColor2)/static_cast<float>(pixelWidth));
        float inc3 = (static_cast<float>(rightColor3 - leftColor3)/static_cast<float>(pixelWidth));
        for (int j=0; j<pixelWidth; j++) {
            fout << left << setw(4) << static_cast<int>(leftColor1 + (inc1 *j));
            fout << setw(4) << static_cast<int>(leftColor2 + (inc2 *j));
            fout << setw(6) << static_cast<int>(leftColor3 + (inc3 *j));
        }
        fout << endl;
    }
    
    
    
    return 0;
}