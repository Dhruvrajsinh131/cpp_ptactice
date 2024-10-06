#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int lastDigitVal = 1;
    int decimalNum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit == 1)
        {
            decimalNum += lastDigitVal;
        }

        lastDigitVal *= 2;
        n = n / 10;
    }

    cout << "Decimal Number = " << decimalNum;
}