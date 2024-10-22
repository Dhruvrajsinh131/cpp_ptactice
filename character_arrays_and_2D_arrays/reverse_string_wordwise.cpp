#include <iostream>
using namespace std;

int getlegth(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

void reverse_string_word_wise(char str[])
{
    int start = 0;
    int end = getlegth(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    int start_str = 0;
    int length = getlegth(str);
    for (int i = 0; i <= length; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int end_str = i - 1;
            while (start_str < end_str)
            {
                char temp = str[start_str];
                str[start_str] = str[end_str];
                str[end_str] = temp;
                start_str++;
                end_str--;
            }
            start_str = i + 1;
        }
    }

    cout << endl
         << str;
}

int main()
{
    char str[100];
    cout << "Enter the string : ";
    cin.getline(str, 100);

    reverse_string_word_wise(str);
}