#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int arr_length;

    cout << "Enter number of length  : ";
    cin >> arr_length;

    // Approach 1

    // int index = 0;

    // for (int i = 1; i <= arr_length; i += 2)
    // {
    //     arr[index++] = i;
    // }

    // for (int i = arr_length; i >= 1; i--)
    // {
    //     if (i % 2 == 0)
    //         arr[index++] = i;
    // }

    // Second approach
    int i = 0;
    int j = arr_length - 1;
    int elem = 1;

    while (i < j)
    {
        arr[i] = elem;
        elem++;
        arr[j] = elem;
        elem++;
        i++;
        j--;
    }
    if (i == j)
    {
        arr[i] = elem;
    }

    // print array
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << " ";
    }
}
