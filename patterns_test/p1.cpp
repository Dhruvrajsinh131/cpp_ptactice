// 1
// 12
// 123
// 1234
// 12345
// ......

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines : ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        // cout << i << endl;

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        cout << '\n';

        i++;
    }
}