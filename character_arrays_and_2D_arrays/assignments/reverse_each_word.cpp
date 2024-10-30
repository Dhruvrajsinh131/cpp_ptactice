#include <iostream>
using namespace std;

void rev_word(char word[], int i, int j)
{
    while (i < j)
    {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char word[100];

    cout << "Enter the string : ";
    cin.getline(word, 100);
    cout << "Input = " << word << endl;

    int i = 0;
    int start = 0;
    while (word[i] != '\0')
    {
        if (word[i] == ' ')
        {
            rev_word(word, start, i - 1);
            start = i + 1;
        }

        i++;
    }
    rev_word(word, start, i - 1);
    cout << "Output = " << word << endl;
}