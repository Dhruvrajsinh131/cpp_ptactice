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

int main()
{
    int arr[] = {1, 0, 2, 1, 0, 1, 2, 0};
    int l = 8;

    // Approach 1 two loops
    // int count0s = 0;
    // int count1s = 0;
    // int count2s = 0;

    // for (int i = 0; i < l; i++)
    // {
    //     switch (arr[i])
    //     {
    //     case 0:
    //         count0s++;
    //         break;
    //     case 1:
    //         count1s++;
    //         break;
    //     case 2:
    //         count2s++;
    //         break;

    //     default:
    //         break;
    //     }
    // }

    // for (int i = 0; i < l; i++)
    // {
    //     if (count0s > 0)
    //     {
    //         arr[i] = 0;
    //         count0s--;
    //     }
    //     else if (count1s > 0)
    //     {
    //         arr[i] = 1;
    //         count1s--;
    //     }
    //     else
    //     {
    //         arr[i] = 2;
    //         count1s--;
    //     }
    // }

    // ----------------------------------------

    // Approach 2 using extra space (new empty array)

    // int index0 = 0;
    // int index2 = l - 1;

    // int tempArr[100];

    // int start = 0;
    // int end = l - 1;
    // int i = 0;
    // while (i < l)
    // {
    //     if (arr[i] == 0)
    //     {
    //         tempArr[start] = 0;
    //         start++;
    //     }
    //     else if (arr[i] == 2)
    //     {
    //         tempArr[end] = 2;
    //         end--;
    //     }
    //     i++;
    // }

    // while (start <= end)
    // {
    //     tempArr[start] = 1;
    //     start++;
    // }

    // Approach 3 in single loop and sqapping

    int index0 = 0;
    int index2 = l - 1;
    int i = 0;

    while (i <= index2)
    {
        if (arr[i] == 0)
        {
            swap(arr, i, index0);
            index0++;

            i++;
        }
        else if (arr[i] == 2)
        {
            swap(arr, i, index2);
            index2--;
        }
        else
        {
            i++;
        }
    }

    print_array(arr, l);
}
