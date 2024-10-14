#include <iostream>
using namespace std;

void insert_in_array(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << "Enter value at index " << i << " : ";
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

int binary_search(int arr[], int l, int target)
{
    int start = 0;
    int end = l - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[100];
    int arr_length;
    int target;

    cout << "Enter the length of number : ";
    cin >> arr_length;

    cout << "Enter target element : ";
    cin >> target;

    insert_in_array(arr, arr_length);

    print_array(arr, arr_length);

    cout << endl;

    cout << binary_search(arr, arr_length, target);
}