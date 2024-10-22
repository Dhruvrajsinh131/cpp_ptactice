#include <iostream>
using namespace std;

int getLength(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

void print_all_substrings(char str[])
{

    int length = getLength(str);

    for (int i = 0; i < length; i++)
    {

        for (int j = i; j < length; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << str[k];
            }
            cout << endl;
        }
    }
}

int main()
{
    char str[100] = "abcd";

    print_all_substrings(str);
}