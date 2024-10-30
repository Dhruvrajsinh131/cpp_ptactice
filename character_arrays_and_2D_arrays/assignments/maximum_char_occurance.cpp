#include <iostream>
using namespace std;

char getMaximumOccuredChar(char word[], int temp_arr[], int temp_length)
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        int char_val = word[i];
        temp_arr[char_val]++;
    }

    int max = 0;

    for (int i = 0; i < temp_length; i++)
    {
        if (temp_arr[i] > temp_arr[max])
        {
            max = i;
        }
    }
    return max;
}

int main()
{
    char word[100];
    int temp_arr[256] = {0};
    int temp_length = 256;

    cout << "Enter the string : ";
    cin >> word;

    cout << "Input = " << word << endl;

    cout << getMaximumOccuredChar(word, temp_arr, temp_length);
}