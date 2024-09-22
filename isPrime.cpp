#include <iostream>
using namespace std;

int main()
{

    int n = 7;
    int i = 2;

    bool divided = false;

    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            divided = true;
        }
        i++;
    }

    if (!divided)
    {
        cout << "Prime";
    }
}