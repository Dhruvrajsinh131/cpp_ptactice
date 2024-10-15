#include <iostream>
using namespace std;

void print_array(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertion_sort(int arr[], int l)
{
    for (int i = 1; i < l; i++)
    {
        int current = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (current < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }
}

int main()
{

    int arr[] = {10, 5, 1, 2, 11};
    int length = 5;

    insertion_sort(arr, length);

    cout << endl;
    print_array(arr, length);
}