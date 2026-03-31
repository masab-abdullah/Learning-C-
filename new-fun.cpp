#include <iostream>
using namespace std;

float convert(float celsius) {
    return (celsius *9/5) + 32;
}
int main() {
    float celcius = 34;
    float fehrinhiet;

    fehrinhiet = convert(celcius);

    cout << " 34 celcius in fehrinhiet is: " << fehrinhiet << endl;
    
    return 0; 
    
    
}