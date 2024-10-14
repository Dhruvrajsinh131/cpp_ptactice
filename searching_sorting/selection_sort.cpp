// Selection sort

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

void selection_sort(int arr[], int l)
{
    for (int i = 0; i < l - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < l; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr, i, min);
    }
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int l = 5;
    print_array(arr, l);

    selection_sort(arr, l);
    cout << endl;
    print_array(arr, l);
}
