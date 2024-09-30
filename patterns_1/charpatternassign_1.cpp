/*
A
BB
CCC
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of lines : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        char c = 'A' + i - 1;
        int j = 1;
        while (j <= i)
        {
            cout << c;
            j++;
        }

        cout << endl;
        i++;
    }
}
