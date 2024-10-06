#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number";
    cin >> n;

    int binaryNum = 0;
    int placeValue = 1;

    while (n > 0)
    {
        int reminder = n % 2;
        binaryNum += reminder * placeValue;
        placeValue *= 10;
        n = n / 2;
    }

    cout << binaryNum;
}