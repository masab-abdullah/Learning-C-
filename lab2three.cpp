#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter first letter of traffic signal (R/Y/G): ";
    cin >> ch;

    if (ch == 'R' || ch == 'r')
        cout << "Red" << endl;
    else if (ch == 'Y' || ch == 'y')
        cout << "Yellow" << endl;
    else if (ch == 'G' || ch == 'g')
        cout << "Green" << endl;
    else
        cout << "Invalid input" << endl;

    return 0;
}