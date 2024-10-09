#include <iostream>
using namespace std;

void convert_to_celsius(int s, int e, int w)
{

    int start = s;
    while (s <= e)
    {
        int c = (s - 32) * (5.0 / 9);

        cout << s << " " << c << endl;

        s += w;
    }
}

int main()
{
    int s, e, w;
    cout << "Enter s Value : " << endl;
    cin >> s;
    cout << "Enter e Value : " << endl;
    cin >> e;
    cout << "Enter w Value : " << endl;
    cin >> w;
    convert_to_celsius(s, e, w);
}