#include <iostream>
using namespace std;

int main() {
    float base, height, area;

    // Input from user
    cout << "Enter base of triangle: ";
    cin >> base;

    cout << "Enter height of triangle: ";
    cin >> height;

    // Calculate area
    area = (base * height) / 2;

    // Output result
    cout << "Area of triangle: " << area << endl;

    return 0;
}