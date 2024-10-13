#include <iostream>
using namespace std;

void take_input(int arr[], int l)
{

    for (int i = 0; i < l; i++)
    {
        cout << "Enter the value at index " << i << " : ";
        cin >> arr[i];
    }
}

void print_array(int arr[], int l)
{

    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
}

void swap(int arr[], int el1, int el2)
{

    int temp = arr[el1];
    arr[el1] = arr[el2];
    arr[el2] = temp;
}

int main()
{
    int arr[100];
    int l;

    cout << "Enter length of array: ";
    cin >> l;

    take_input(arr, l);

    cout << "Array values : " << endl;
    print_array(arr, l);

    cout << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr, i, j);
                break;
            }
        }
    }

    cout << "Sorted Array values : " << endl;
    print_array(arr, l);
}