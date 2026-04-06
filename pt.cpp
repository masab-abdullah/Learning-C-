#include <iostream>
using namespace std;

int main() {
    int num = 10;      // normal variable

    int *ptr = &num;   // pointer storing address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer (address): " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}