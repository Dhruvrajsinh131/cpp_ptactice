#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    int i = 1;
    while (i <= num)
    {
        fact *= i;
        i++;
    }

    return fact;
}

int main()
{
    int n, r;

    cin >> n >> r;

    int fact_n = factorial(n);

    int fact_r = factorial(r);
    int fact_nr = factorial(n - r);

    cout << fact_n / (fact_r * fact_nr) << endl;
}