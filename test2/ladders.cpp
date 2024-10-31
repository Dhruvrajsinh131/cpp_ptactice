#include <iostream>
using namespace std;

int main()
{
    int arr[] = {13, 17, 5, 6, 7};
    int l = 5;

    int max_right = arr[l - 1];
    int leaders[l];
    int index = 0;

    leaders[index++] = max_right;
    for (int i = l - 2; i >= 0; i--)
    {

        if (arr[i] > max_right)
        {
            leaders[index++] = arr[i];
            max_right = arr[i];
        }
    }

    for (int i = index - 1; i >= 0; i--)
    {
        cout << leaders[i] << " ";
    }
}