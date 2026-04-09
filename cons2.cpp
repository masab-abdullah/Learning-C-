#include <iostream>
using namespace std;

class mobile {
    public:
    string company;
    int price;

    mobile() {
        company = "iphone";
        price = 120000;
    }
    void show() {
        cout << "mobile company is: " << company << endl;
        cout << "mobile price is: " << price << endl;

    }
};
int main() { 
    mobile m1;
    
    m1.show();

    return 0;
}


