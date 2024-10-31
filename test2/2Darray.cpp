#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9},
                     {10, 11, 12}};

    int r = 4;
    int c = 3;

    for (int i = 0; i < r; i++)
    {
        for (int j = r - i; j > 0; j--)
        {
            for (int k = 0; k < c; k++)
            {
                cout << arr[i][k] << " ";
            }
            cout << endl;
        }
    }
}