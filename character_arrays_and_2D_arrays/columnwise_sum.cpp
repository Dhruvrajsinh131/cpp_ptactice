#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];

    int r;
    int c;

    int columnSums[100] = {0};

    cout
        << "Enter number of rows : ";
    cin >> r;

    cout << "Enter number of columns : ";
    cin >> c;

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << "Enter the number at index (" << i << "," << j << ") : ";
            cin >> arr[i][j];

            columnSums[j] += arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < c; ++i)
    {
        cout << columnSums[i] << " ";
    }
}