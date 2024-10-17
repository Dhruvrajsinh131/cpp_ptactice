#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[] = {6, 6};
    int l = 2;
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < l; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
        if (arr[i] < max && smax < arr[i])
        {
            smax = arr[i];
        }
    }

    cout << "smax = " << smax << endl;
}