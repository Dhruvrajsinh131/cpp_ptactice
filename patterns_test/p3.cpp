//    1
//   12
//  123
// 1234

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of lines : ";
    cin >> n;

    int i = 1;

    int val = 1;
    while (i <= n)
    {
        int k = 1;

        while (k <= n - i)

        {
            cout << " ";
            k++;
        }
        int j = 1;
        while (j <= i)
        {

            cout << val;
            val++;
            j++;
        }

        cout << endl;
        i++;
    }
}