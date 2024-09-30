#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an odd number of lines: ";
    cin >> n;

    int mid = (n / 2) + 1;
    int i = 1;

    while (i <= mid)
    {
        int j = 1;
        while (j <= mid - i)
        {
            cout << " ";
            j++;
        }

        j = 1;
        while (j <= 2 * i - 1)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    i = mid - 1;
    while (i >= 1)
    {

        int j = 1;
        while (j <= mid - i)
        {
            cout << " ";
            j++;
        }

        j = 1;
        while (j <= 2 * i - 1)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i--;
    }

    return 0;
}
