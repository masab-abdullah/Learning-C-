#include <iostream>
using namespace std;

int add(int x)
{
    return x + 2;
}

int main()
{
    int a = 3;

    for(int i = 1; i <= -1; i++)
    {
        a = add(a);
        cout << a << " ";
    }
}