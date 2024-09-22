#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter number of lines:";

    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n;
            j++;
        }

        cout << endl;
        i++;
    }
}