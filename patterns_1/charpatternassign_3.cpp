/* For n = 5
E
DE
CDE
BCDE
ABCDE
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Numnner of Line : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;

        char c = n + 65 - i;
        while (j <= i)
        {
            cout << c;
            c++;
            j++;
        }

        cout << endl;
        i++;
    }
}