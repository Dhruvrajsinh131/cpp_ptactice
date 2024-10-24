#include <iostream>
#include <climits>
using namespace std;

void take_input(int arr[][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter number at index (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
}

void print_array(int arr[][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
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

    cout << "Enter the number of rows : ";
    cin >> r;

    cout << "Enter the number of columns : ";
    cin >> c;

    take_input(arr, r, c);

    print_array(arr, r, c);

    cout << endl;

    int max_sum = INT_MIN;
    int index = -1;
    bool isRow = true;

    for (int i = 0; i < r; i++)

    {

        int row_sum = 0;
        for (int j = 0; j < c; j++)
        {
            row_sum += arr[i][j];
        }

        if (row_sum > max_sum)
        {
            max_sum = row_sum;
            index = i;
            isRow = true;
        }
    }

    for (int i = 0; i < c; i++)

    {

        int col_sum = 0;

        for (int j = 0; j < r; j++)
        {
            col_sum += arr[j][i];
        }

        if (col_sum > max_sum)
        {
            max_sum = col_sum;
            index = i;
            isRow = false;
        }
    }

    if (isRow)
    {
        cout << "Row " << index << " " << max_sum;
    }
    else
    {
        cout << "Column " << index << " " << max_sum;
    }
}
