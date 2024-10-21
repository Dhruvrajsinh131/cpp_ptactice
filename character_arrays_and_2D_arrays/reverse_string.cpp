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

void reverse(char str[])
{
    int start = 0;
    int end = getLength(str) - 1;

    while (start < end)
    {

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main()
{

    char str[100];

    cout << "Enter the string : ";
    cin.getline(str, 100);

    reverse(str);

    cout << "Reversed string : " << str;
}