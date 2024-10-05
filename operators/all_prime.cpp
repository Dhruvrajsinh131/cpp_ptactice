#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        bool divided = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                divided = true;
            }
        }
        if (!divided)
        {
            cout << i << endl;
        }
    }
}