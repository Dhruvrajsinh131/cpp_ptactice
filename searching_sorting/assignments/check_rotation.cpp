#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 1};
    int l = 4;
    int change_index = 0;

    for (int i = 0; i < l; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            change_index = i + 1;
            cout << change_index;
            return change_index;
        }
    }
    cout << change_index;
    return change_index;
}