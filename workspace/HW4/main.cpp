//this program simulates a falling projectile from a plane
//to test different heights and velocities. Enjoy Swallow!!!!
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

//this function get time for given velocity and distance
float GetT(float v, float d) {
    if(v == 0){
        return 0.0;
    }
    else {
        float t = d / v;
        return t;
    }
}

//this function gets distance for given velocity and height (g is a constant)
//it is also imposible to divide by zero in this function 
//so I dont know how or why to put in a statement to look for it
float GetD(float v, float h, float g) {
    float d = v * (sqrt(2.0 * (h / g)));
    return d;
}

//this function reports all of the results for the given data
void Report(int line, float v, float h, float d, float t) {
    cout << "On line " << right << setw(2) << line
                << ",  v = " << setw(3) << v
                << ",  h = " << setw(5) << h << setprecision(5)
                << ",  d = " << setw(6) << d << "m"
                << ",  t = " << setw(6) << t << "s" << endl;
    return;
}

int main() {
    
    //define various variables
    const float g = 9.8;
    float v;
    float d;
    float h;
    float t;
    int line = 1;
    
    //get info from the file and does the calculations
    fstream fin("input.txt");
    while (line <= 25) {
        fin >> v >> h;
        d = GetD(v, h, g);
        t = GetT(v, d);
        Report(line, v, h, d, t);
        line++;
    
    }
    fin.close();
    
    return 0;
}