#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;

    cout << "enter a number: ";
    cin >> num;

    while(num !=0) {
        int digit = num % 10;
        reverse = num * 10 + digit;
        num = num / 10;
    }
    cout << "reversed number: " << reverse;
    return 0;
}