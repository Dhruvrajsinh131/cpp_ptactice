#include <iostream>
using namespace std;

int main()
{
    char word[100];
    char target;

    cout << "Enter the word : ";
    cin.getline(word, 100);
    cout << "Input = " << word << endl;

    cout << "Enter character to remove from string : ";
    cin >> target;

    cout << "Charcter to remove is = " << target << endl;

    int i = 0;

    while (word[i] != '\0')
    {
        if (word[i] == target)
        {
            int j = i;
            while (word[j] != '\0')
            {
                word[j] = word[j + 1];
                j++;
            }
        }
        else
        {
            i++;
        }
    }

    cout << "Output = " << word;
}