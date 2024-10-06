#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int sq = i * i;
        if (sq > n)
        {
            cout << "sqrt is " << i - 1;
            break;
        }
    }
}