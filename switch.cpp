#include <iostream>
using namespace std;

int fun( int x )
{
    switch(x % 5)
    {
    case 0: return x / 2;
    case 1: return x * 2;
    
    }
    return 0;
}
int main() {
    for(int i =2; i <=5;i++)
    {
        cout << fun(i) << " ";
    }
}