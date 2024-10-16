#include <iostream>
using namespace std;

void print_array(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr_a[] = {1, 5, 9, 12, 20};
    int arr_b[] = {2, 6, 8};
    int size_a = 5;
    int size_b = 3;

    int arr_c[100];

    int a = 0;
    int b = 0;
    int c = 0;

    while (a < size_a && b < size_b)
    {
        if (arr_a[a] < arr_b[b])
        {
            arr_c[c] = arr_a[a];
            a++;
            c++;
        }
        else
        {
            arr_c[c] = arr_b[b];
            b++;
            c++;
        }
    }

    while (a < size_a)
    {
        arr_c[c] = arr_a[a];
        a++;
        c++;
    }

    while (b < size_b)
    {
        arr_c[c] = arr_b[b];
        b++;
        c++;
    }

    print_array(arr_c, c);
}