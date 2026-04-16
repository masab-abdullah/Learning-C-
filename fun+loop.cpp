#include <iostream>
using namespace std;

void fun(int x)
{
    x = x + 2;
    for(int i = 1; i <=5; i++)
    {
        cout << i << endl;
    }
}
    int main() {
        int a = 3;
        fun(a);
        cout << a << endl;
        return 0;
    }

