#include <iostream>
using namespace std;

void test(int n)
{
if(n==0)
return;

cout << n << endl;

test(n-1);
}
int main () {
    int n = 3;
    test(n);
    return 0;
}