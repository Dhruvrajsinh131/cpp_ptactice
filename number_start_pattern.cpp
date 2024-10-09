#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        int j = 1;

        while (j <= n)
        {

            if (j > n - i + 1)
            {
                cout << "*";
            }
            else
            {

                cout << j;
            }

            j++;
        }
        j = j - 1;

        while (j > 0)
        {
            if (j > n - i + 1)
            {
                cout << "*";
            }
            else
            {

                cout << j;
            }
            j--;
        }

        cout << endl;
    }
}