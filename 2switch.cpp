#include <iostream>
using namespace std;

int main() {
    int x = 10;
    switch(x % 4)
    {
        case 0:
        cout << x * 10;
        break;

        case 1:
        cout << x / 10;
        break;

        case 2:
        cout << x / 2;

    }
    return 0;
}