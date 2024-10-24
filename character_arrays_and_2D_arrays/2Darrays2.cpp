#include <iostream>
using namespace std;

void take_input(int arr[][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the number at index (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
}

void print_array(int arr[][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int arr[100][100];

    int r, c;

    cout << "Enter  the number of rows : ";
    cin >> r;

    cout << "Enter the number of columns : ";
    cin >> c;

    take_input(arr, r, c);
    cout << endl;

    print_array(arr, r, c);
}