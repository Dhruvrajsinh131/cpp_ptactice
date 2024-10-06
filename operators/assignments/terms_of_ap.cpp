#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int i = 1;
    int count = 0;
    while (count < n)
    {
        if (((3 * i) + 2) % 4 != 0)
        {

            cout << (3 * i) + 2 << " ";
            count++;
        }
        i++;
    }
}