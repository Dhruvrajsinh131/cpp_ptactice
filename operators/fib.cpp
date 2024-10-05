#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;

    int t1 = 0;
    int t2 = 1;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            continue;
        }
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }

    cout << t1 << endl;
}