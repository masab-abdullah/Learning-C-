#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Take input from user
    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    // Perform operations
    cout << "Addition: " << n1 + n2 << endl;
    cout << "Subtraction: " << n1 - n2 << endl;
    cout << "Multiplication: " << n1 * n2 << endl;

    // Division (use float for accurate result)
    cout << "Division: " << (float)n1 / n2 << endl;

    return 0;
}