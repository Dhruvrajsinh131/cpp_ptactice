#include <iostream>
using namespace std;

void take_input(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << "Enter the element at index " << i << " : ";
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

void swap(int arr[], int i, int j)
{

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main()
{
    int arr[100];
    int l;

    cout << "Enter the length of array : ";
    cin >> l;
    take_input(arr, l);

    int i = 0;
    int k = 0;

    while (i < l)
    {
        if (arr[i] != 0)
        {
            swap(arr, i, k);
            k++;
        }

        i++;
    }

    cout << endl;
    print_array(arr, l);
}