#include <iostream>
using namespace std;

void signcheck(int num) {
    if(num >0) {
cout << "number is positive \n";
    }
    else if(num < 0) {
        cout << "number is negative\n";
    }
        else {
             cout << "number is 0\n ";
        }
    }
int main() {
    int num;
    cout << "enter a number\n";
    cin >> num;

    signcheck(num);
    return 0;
}
    
