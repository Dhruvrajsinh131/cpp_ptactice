#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char name[50];
    cout << "Enter your name : ";
    cin >> name;
    // name[3] = 'd';
    // name[4] = 'x';
    // name[5] = 'g';

    // name[2] = '\0';

    cout << "Entered name is  " << name << endl;
    cout << "String length is = " << getLength(name);
}