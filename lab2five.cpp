#include <iostream>
using namespace std;

int main() {
    int num, result;

    cout << "Enter a 4-digit number: ";
    cin >> num;

    result = num + 8;
    result = result / 3;
    result = result % 5;
    result = result * 5;

    cout << "Final Result: " << result << endl;

    return 0;
}