#include <iostream>
using namespace std;

class bullet {
    public:
bullet() { // constructer 

    cout << "bullet fired: \n";
}
~bullet() { // destructer 
    cout << "bullet dstroyed:\n";
}
};
int main() {
    cout << "game start:\n";

    bullet b1; // object created constructer run

cout << " bullet is moving\n"; // object moving destructer run 
 
return 0;


}