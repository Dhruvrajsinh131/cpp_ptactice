#include <iostream>
using namespace std;

bool check_permutation(char temp_arr[], char str_1[], char str_2[])

{

    int len_1 = 0, len_2 = 0;
    for (; str_1[len_1] != '\0'; len_1++)
        ;
    for (; str_2[len_2] != '\0'; len_2++)
        ;

    if (len_1 != len_2)
    {
        return false; // If lengths are different, they cannot be permutations
    }

    for (int i = 0; str_1[i] != '\0'; i++)
    {
        int char_value = str_1[i];

        temp_arr[char_value]++;
    }

    for (int i = 0; i < str_2[i] != '\0'; i++)
    {
        int char_value = str_2[i];

        temp_arr[char_value]--;
        if (temp_arr[char_value] < 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char temp_arr[256] = {0};
    char str_1[] = {'a', 'b', 'a', 'd'};
    char str_2[] = {'b', 'a', 'd', 'a'};

    cout << "Check Permutation: " << (check_permutation(temp_arr, str_1, str_2) ? "True" : "False") << endl;
}