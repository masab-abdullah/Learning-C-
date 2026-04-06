#include <iostream>
using namespace std;

int main() {
    float doorHeight = 8.0;
    float friendHeight, difference;

    // Take input
    cout << "Enter your friend's height (in feet): ";
    cin >> friendHeight;

    // Calculate difference
    difference = doorHeight - friendHeight;

    // Display result
    cout << "Difference between door and your friend's height: " 
         << difference << " feet" << endl;

    return 0;
}