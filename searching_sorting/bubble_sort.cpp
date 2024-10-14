// Bubble sort

#include <iostream>
using namespace std;

void print_array(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
}

void swap(int arr[], int i, int j)
{

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubble_sort(int arr[], int l)
{
    for (int k = 0; k < l - 1; k++)
    {
        for (int i = 0; i < l - 1 - k; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr, i, i + 1);
            }
        }
    }
}

int main()
{
    int arr[] = {10, 1, 9, 4, 5};
    int l = 5;

    bubble_sort(arr, l);

    cout << endl;
    print_array(arr, l);
}