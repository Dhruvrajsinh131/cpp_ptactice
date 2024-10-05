#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    bool divided = false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            divided = true;
        }
    }

    if (divided)
    {
        cout << "Not prime." << endl;
    }
    else
    {
        cout << "Prime" << endl;
    }
}