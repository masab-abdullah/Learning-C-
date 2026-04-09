#include <iostream>
using namespace std;

class car {
    public:
    string brand;
    int speed;

     car(string b, int s) {
        brand = b;
        speed = s;
     }
     void show() {
        cout << "brand:" << brand << endl;
        cout << "speed:" << speed << endl;

     }
};
int main() {
    car c1("toyata",180);
    car c2("honda" , 120);

    c1.show();
    c2.show();
    return 0;
}
