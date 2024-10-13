#include <iostream>
using namespace std;

void print_array(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
}

void swap(int arr[], int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}
void reverse_number(int arr[], int l)
{
    int start = 0;
    int end = l - 1;

    while (start < end)
    {
        swap(arr, start, end);
        start++;
        end--;
    }

    print_array(arr, l);
}

int main()
{
    int input[6] = {1, 2, 3, 4, 5, 6};
    int l = 6;

    reverse_number(input, l);
}