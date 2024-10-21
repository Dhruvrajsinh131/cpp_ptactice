#include <iostream>

using namespace std;

void remove_spaces(char str[])
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
}

int main()
{

    char str[100];

    cout << "Enter the String : ";

    cin.getline(str, 100);

    remove_spaces(str);

    cout << str;
}