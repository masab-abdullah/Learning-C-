#include <iostream>
using namespace std;

class book {
    public:
    string title;
    int pages;

    void show() {
        cout << "Book title:" << title << endl;
        cout << " number of pages:" << pages << endl;

    }
};
int main() {
    
book b1;

 b1.title = "ART OF BEING ALONE";
 b1.pages = 345;
 b1.show();

 return 0;

}