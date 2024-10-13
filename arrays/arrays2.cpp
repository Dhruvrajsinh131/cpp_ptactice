#include <iostream>
using namespace std;

void increment(int a, int b[])
{
    a++;
    b[0]++;
}

int main()
{
    int a = 10;
    int b[100] = {1, 435, 6456, 57};

    increment(a, b);
    cout << "a : " << a << endl;
    cout << "b[0] : " << b[0] << endl;
}