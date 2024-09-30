/*
ABCD
BCDE
CDEF
DEFG

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
        int j = 1;
        char start = 'A' + i - 1;
        while (j <= n)
        {

            cout << start;
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}