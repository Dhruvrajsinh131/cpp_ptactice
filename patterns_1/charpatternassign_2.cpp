#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of lines : ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char start = 'A' + i - 1;
        while (j <= i)
        {
            cout << start;
            start++;
            j++;
        }

        cout << endl;
        i++;
    }
}