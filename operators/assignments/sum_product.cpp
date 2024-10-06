#include <iostream>
using namespace std;

int main()
{

    while (true)
    {

        int opt;

        cout << "Press 1 for sum. " << endl;
        cout << "Press 2 for product. " << endl;
        cout << "Press 0 to Exit. " << endl;

        cout << "Enter your choice here : ";
        cin >> opt;

        if (opt == 0)
        {
            break;
        }
        int n;
        cout << "Enter the number : ";
        cin >> n;

        if (opt == 1)

        {

            int sum = 0;
            for (
                int i = 1; i <= n; i++)
            {
                sum += i;
            }

            cout << "The sum is = " << sum << endl;
        }
        else if (opt == 2)
        {

            int product = 1;
            for (
                int i = 1; i <= n; i++)
            {
                product *= i;
            }
            cout << "The product is = " << product << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}