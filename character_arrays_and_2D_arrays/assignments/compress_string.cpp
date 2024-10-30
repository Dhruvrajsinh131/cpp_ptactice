#include <iostream>
using namespace std;

void compress_string(char str[], char comp_str[])
{
    int count = 1;
    int k = 0;

    for (int i = 1; str[i - 1] != '\0'; i++)
    {
        if (str[i] == str[i - 1])
        {
            count++;
        }
        else
        {
            comp_str[k] = str[i - 1];
            k++;

            int countCopy = count;
            int numDigits = 0;

            while (countCopy > 0)
            {
                numDigits++;
                countCopy /= 10;
            }

            countCopy = count;

            for (int j = numDigits - 1; j >= 0; j--)
            {
                comp_str[k + j] = '0' + (countCopy % 10);
                countCopy /= 10;
            }
            k += numDigits;
            count = 1;
        }
    }
    comp_str[k] = '\0';
}

int main()
{
    char str[100] = "aaabbccc";
    char comp_str[100];

    compress_string(str, comp_str);

    cout << " Compressed String = " << comp_str;
}