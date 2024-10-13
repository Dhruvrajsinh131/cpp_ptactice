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

int find_unique(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        int count = 0;
        for (int j = 0; j < l; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > 1)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[100];
    int l;

    cout << "Enter the number of length : ";
    cin >> l;

    take_input(arr, l);

    int dup_elem = find_unique(arr, l);

    cout << "Duplicate elemt  = " << dup_elem;
}