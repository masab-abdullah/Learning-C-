#include <iostream>
using namespace std;

int main() {
    float gpa = 3.95;
    float inputGPA;

    cout << "Enter your GPA: ";
    cin >> inputGPA;

    if (inputGPA == gpa)
        cout << "Congratulations" << endl;
    else
        cout << "Work hard" << endl;

    return 0;
}