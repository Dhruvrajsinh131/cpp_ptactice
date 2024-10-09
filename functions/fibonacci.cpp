#include <iostream>
using namespace std;

bool isInFib(int n)
{
    if (n == 0)
        return true;
    int first = 0;
    int second = 1;
    int sum = 0;

    int i = 0;
    while (sum <= n)
    {

        sum = first + second;
        first = second;
        second = sum;
        if (first == n)
            return true;
        i++;
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << isInFib(n);
}