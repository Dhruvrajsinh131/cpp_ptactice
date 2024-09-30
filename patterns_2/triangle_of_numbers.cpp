/*
    1
   232
  34543
 4567654
567898765

*/

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

        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces++;
        }

        int j = 1;
        int p = i;
        while (j <= i)
        {
            cout << p;
            p++;
            j++;
        }
        p = p - 2;
        while (p >= i)
        {
            cout << p;
            p--;
        }

        cout << endl;
        i++;
    }
}