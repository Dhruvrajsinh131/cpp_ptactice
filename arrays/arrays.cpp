#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of an array : ";
    cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " index element : ";
        cin >> input[i];
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    // {

    //     cout << input[i] << endl;
    // }

    // largest element in an array

    // int maxium = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     if (input[i] > maxium)
    //     {
    //         maxium = input[i];
    //     }
    // }
    // cout << "Maximun element you entered is : " << maxium;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += input[i];
    }
    cout << "Sum  = " << sum;
}