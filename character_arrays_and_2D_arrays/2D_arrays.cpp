#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];

    int r;
    int c;

    cout << "Enter Number of rows : ";
    cin >> r;
    cout << "Enter Number of columns : ";
    cin >> c;

    // take input
    for (int i = 0; i < r; i++)

    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element at index : (" << i << "," << j << ") ";
            cin >> arr[i][j];
        }
    }

    // print array  column wise

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // print array  row wise

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}