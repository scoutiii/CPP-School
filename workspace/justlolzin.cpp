#include <iostream>
using namespace std;

int main() {
    
    int nums[3];
    cout << "enter 3 nums no spaces: ";
    cin >> nums[0];
    cin >> nums[1];
    cin >> nums[2];
    
    for(int i=0; i<3; ++i) {
        cout << nums[i];
    }
    
    return 0;
}