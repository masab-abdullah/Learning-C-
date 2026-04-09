#include <iostream>
using namespace std;

class car {
 public:  
 string brand;
 int speed;
 
 void show() {
    cout << " car brand is:" << brand << endl;
    cout << " car speed is:" << speed << endl;
 }
};
int main() {
    car c1;
     
    c1.brand = "Haval";
    c1.speed = 220;
    c1.show();
    return 0;
}