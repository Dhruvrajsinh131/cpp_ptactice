#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number of Rows : ";
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

        while (j <= i)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }
}