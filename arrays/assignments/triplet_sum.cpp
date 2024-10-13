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
    int arr[100];
    int l;
    int target;

    cout << "Enter length of array: ";
    cin >> l;

    cout << "Enter target sum : ";
    cin >> target;

    take_input(arr, l);

    cout << "Array values : " << endl;
    print_array(arr, l);
    cout << endl;

    int count = 0;

    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            for (int k = j + 1; k < l; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                    count++;
            }
        }
    }

    cout << "Answer = " << count << endl;
}