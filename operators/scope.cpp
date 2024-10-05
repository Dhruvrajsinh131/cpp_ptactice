#include <iostream>
using namespace std;

int main()
{

    // int i = 30;
    // cout << i << endl;

    // if (i == 30)
    // {
    //     int j = 5;
    //     cout << j << endl;
    // }
    // cout << j << endl;   //This will throw an error

    // ------------------------------------

    int i = 10;
    // int i = 22;  not allowed  in same scope

    if (i == 10)
    {
        int i = 23;

        cout << i << endl;
    }

    cout << i << endl;
}