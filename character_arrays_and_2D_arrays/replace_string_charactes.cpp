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

void replaceChar(char str[], char from_char, char to_char)
{

    for (int i = 0; i < getLength(str); i++)
    {
        if (str[i] == from_char)
            str[i] = to_char;
    }
}

int main()
{
    char input_arr[100];
    char from_char;
    char to_char;
    cout << "Enter a string : ";
    cin >> input_arr;

    cout << "Your String is = " << input_arr << endl;

    cout << "Enter character  from character for replace : ";
    cin >> from_char;
    cout << "Enter character  to character for replace : ";
    cin >> to_char;

    replaceChar(input_arr, from_char, to_char);

    cout << "Successfully replaced : " << input_arr;
}