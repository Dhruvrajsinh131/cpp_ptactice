#include <iostream>
using namespace std;
int main()
{
    char c;

    cout << "Enter Character : ";
    cin >> c;

    if (c >= 65 && c <= 90)
    {
        cout << 1;
        return 1;
    }
    else if (c >= 97 && c <= 122)
    {
        cout << 0;
        return 0;
    }
    else
    {
        cout << -1;
        return -1;
    }
}