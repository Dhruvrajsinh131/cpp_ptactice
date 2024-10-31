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

int main()
{
    char str[100];
    cout << "Enter the string : ";
    cin.getline(str, 100);

    cout << "Input = " << str << endl;

    char l = getLength(str);

    int start = 0, end = 0, length = 0, minLength = 1000;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            length++;
        }
        else
        {
            if (length < minLength && length > 0)
            {
                minLength = length;
                start = i - length - 1;
                end = i;
            }
            length = 0;
        }
    }
    if (length < minLength && length > 0)
    {
        minLength = length;
        start = l - length;
        end = start + length;
    }

    cout << "Minimum length Word : ";
    for (int i = start; i < end; i++)

    {
        cout << str[i];
    }
    cout << endl;
}
