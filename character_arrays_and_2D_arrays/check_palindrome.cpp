#include <iostream>
using namespace std;

int getLastIndex(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

bool isPalindrome(char str[])
{

    int l = getLastIndex(str);
    int start = 0;
    int end = l - 1;
    while (start < end)
    {
        if (str[start] != str[end])
        {

            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main()
{
    char inputstr[100];
    cout << "Enter the string : ";
    cin >> inputstr;

    cout << isPalindrome(inputstr);
}