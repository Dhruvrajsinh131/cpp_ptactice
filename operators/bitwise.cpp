#include <iostream>
using namespace std;

int main()
{
    int qor = 15 | 30;
    int qand = 15 & 30;
    int qnot = ~15;
    int qxor = 15 ^ 30;
    int qls = 15 << 2;
    int qrs = 15 >> 2;

    cout << qor << endl;
    cout << qand << endl;
    cout << qnot << endl;
    cout << qxor << endl;
    cout << qls << endl;
    cout << qrs << endl;
}