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
    int arr1[] = {8, 5, 2, 2, 5, 2};
    int l1 = 6;
    int arr2[] = {1, 3};
    int l2 = 2;

    int maxLength = max(l1, l2);

    int sum_array[100];

    int k = maxLength;
    int carry = 0;

    int i = l1 - 1;
    int j = l2 - 1;

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += arr1[i];
            i--;
        }

        if (j >= 0)
        {
            sum += arr2[j];
            j--;
        }

        sum_array[k] = sum % 10;
        carry = sum / 10;
        k--;
    }

    print_array(sum_array + k + 1, maxLength);
}