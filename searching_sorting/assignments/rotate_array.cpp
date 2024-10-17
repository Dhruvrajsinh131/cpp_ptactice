#include <iostream>
using namespace std;

void print_array(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse_array(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{

    int arr[] = {2, 6, 4, 1, 9, 15, 18, 4};
    int l = 8;
    int d = 1;

    // approach 1
    // for (int i = 0; i < d; i++)
    // {
    //     int temp = arr[0];
    //     for (int j = 0; j < l - 1; j++)
    //     {
    //         arr[j] = arr[j + 1];
    //     }
    //     arr[l - 1] = temp;
    // }

    // approach 2
    reverse_array(arr, 0, l - 1);
    reverse_array(arr, 0, l - 1 - d);
    reverse_array(arr, l - d, l - 1);
    cout << endl;
    print_array(arr, l);
}