#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    // ----------------------------------------

    // strlen()
    // char name[100];

    // cout << "Enter your name : ";
    // cin >> name;

    // cout << endl
    //      << "The length of array is = " << strlen(name);

    // ----------------------------------------

    // strcmp()
    // char name1[100];
    // char name2[100];

    // cout << "Enter your name1 : ";
    // cin >> name1;

    // cout << endl;

    // cout << "Enter your name 2 : ";
    // cin >> name2;

    // if (strcmp(name1, name2) == 0)
    // {
    //     cout << "Both string are same .";
    // }
    // else
    // {
    //     cout << "Both string are not same .";
    // }

    // ----------------------------------------

    // strcpy()

    //     char name1[100] = "Joy";
    //     char name2[100] = "John";

    //     cout << "Before copy : " << name1 << " " << name2 << endl;

    //     strcpy(name2, name1);
    //     cout << "after copy : " << name1 << " " << name2;

    // --------------------------
    // strncpy()

    char name1[100] = "abcd";
    char name2[100] = "he";

    cout << "Before copy :   " << name1 << " " << name2 << endl;

    strncpy(name2, name1, 9);
    cout << "after copy : " << name1 << " " << name2;
}