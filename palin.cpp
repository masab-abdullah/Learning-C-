#include <iostream>
using namespace std;

int main() {
    int num, original;
    int rev = 0, digit;
    int count = 0, sum = 0;

    cout << "Enter number: ";
    cin >> num;

    original = num;

    while(num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        count++;
        sum = sum + digit;
        num = num / 10;
    }

    cout << "Total digits: " << count << endl;
    cout << "Sum of digits: " << sum << endl;

    if(original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}