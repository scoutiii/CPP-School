#include <iostream>
    #include <cmath>    // sqrt() function
    using namespace std;

    int main() {
        int i = -1;
        float j = -1.0;

        cout << "Enter a number: ";
        cin >> i;

        if (i >= 0) {
            float j = sqrt(i);
        }
        else {
            i = abs(i);
            float j = sqrt(i);
        }

        cout << "The square root of " << i << " is " << j << endl;
    }