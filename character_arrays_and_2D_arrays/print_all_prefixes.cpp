#include <iostream>
using namespace std;

void print_all_prefixes(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << str[j];
        }
        cout << endl;
    }
}

int main()
{
    char str[100] = "wxyz";
    print_all_prefixes(str);
}