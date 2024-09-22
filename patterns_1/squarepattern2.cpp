/*

1234
1234
1234
1234
....



*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of  lines : ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        int j = 1;

        while (j <= n)
        {
            cout << j;
            j++;
        }

        cout << endl;
        i++;
    }
}