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

        int k = 1;

        while (k <= n - i)
        {
            cout << " ";
            k++;
        }

        int j = 1;
        while (j <= i * 2 - 1)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }
}