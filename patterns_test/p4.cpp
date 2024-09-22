// 1
// 23
// 345
// 4567
// .....

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the numer of lines : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {

        int l = 1;

        while (l <= n - i)
        {
            cout << " ";
            l++;
        }

        int j = 1;
        int k = i;

        while (j <= i)
        {
            cout << k;
            j++;
            k++;
        }

        cout << endl;
        i++;
    }
}