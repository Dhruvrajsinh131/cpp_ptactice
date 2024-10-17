#include <iostream>
using namespace std;

void print_array(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {2, 6, 4, 1, 9, 15, 18, 4};
    int l = 8;
    int d = 3;

    for (int i = 0; i < d; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < l - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[l - 1] = temp;
    }

    cout << endl;
    print_array(arr, l);
}