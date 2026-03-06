#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;

    cout << "[before] a = " << a << ", b = " << b << endl;

    a ^= b;
    b = a ^ b;
    a ^= b;

    cout << "[after] a = " << a << ", b = " << b << endl;

    return 0;
}