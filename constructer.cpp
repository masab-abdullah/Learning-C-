#include <iostream>
using namespace std;

class car {
    public:
    string brand;
    int model;

    car() {
        brand = "haval";
        model = 22;
    }
    void show() {
        cout << "car brand is:" << brand << endl;
        cout << " car model is:" << model << endl;
    }
};
int main() {
    car c1;

    c1.show();
    
    return 0;
}

