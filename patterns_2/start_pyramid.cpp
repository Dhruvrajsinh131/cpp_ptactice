//    *
//   ***
//  *****
// *******

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of lines : ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {

        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }

        int j = 1;
        while (j <= i * 2 - 1)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }
}