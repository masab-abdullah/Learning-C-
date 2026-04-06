#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";

    // Length
    cout << "Length of s1: " << s1.length() << endl;

    // Append
    s1.append(" ");
    s1.append(s2);
    cout << "After append: " << s1 << endl;

    // Compare
    if (s1.compare(s2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    // Substring
    cout << "Substring of s1: " << s1.substr(0, 5) << endl;

    return 0;
}