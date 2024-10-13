#include <iostream>
using namespace std;

void linear_search(int target, int arr[], int arr_length)
{
    cout << "Enter the number to find : ";
    cin >> target;
    cout << endl;

    cout << "Enter the length of array : ";
    cin >> arr_length;

    for (int i = 0; i < arr_length; i++)
    {
        cout << "Enter the number at index " << i << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < arr_length; i++)
    {
        if (target == arr[i])
        {
            cout << "Your element found at index : " << i;
            return;
        }
    }

    cout << "Your element not found";
    return;
}

int main()
{

    int target;
    int arr[100];
    int arr_length;

    linear_search(target, arr, arr_length);
}
