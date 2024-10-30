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

    cin >> str;

    cout << "String = " << str << ". length = " << getLength(str);

    int length = getLength(str);
    int i = 0;
    while (str[i] != '\0')
    {
        int j = i + 1;
        if (str[i] == str[j])
        {
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
        }
        else
        {
            i++;
        }
    }
    cout << endl;
    cout << "After removing duplicates -> " << "String = " << str << ". length = " << getLength(str);
}