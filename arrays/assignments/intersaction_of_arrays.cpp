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

int main()
{
    int arr1[100];
    int l1;
    int arr2[100];
    int l2;

    cout << "Enter length of array1 : ";
    cin >> l1;

    take_input(arr1, l1);

    cout << "Enter length of array2 : ";
    cin >> l2;

    take_input(arr2, l2);

    cout << "First array : " << endl;
    print_array(arr1, l1);
    cout << endl;
    cout << "Second array : " << endl;
    print_array(arr2, l2);
    cout << endl;

    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}