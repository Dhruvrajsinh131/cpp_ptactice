#include <iostream>
using namespace std;

bool isEven(int x)
{

    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr[][100] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    int r = 4;
    int c = 6;

    for (int i = 0; i < c - 1; i++)
    {
        if (isEven(i))
        {
            for (int j = 0; j < r; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = r; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}
