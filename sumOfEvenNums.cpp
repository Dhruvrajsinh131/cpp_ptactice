#include <iostream>
using namespace std;

int main()
{

    int n = 7;
    int i = 1;
    int sum = 0;

    while (i <= n)
    {

        if (i % 2 == 0)
        {
            sum += i;
        }

        i++;
    }

    cout << sum;
}