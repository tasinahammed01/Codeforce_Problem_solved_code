#include <bits/stdc++.h>
using namespace std;

int main()
{

    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++)
    {
        char ch = x[i];
        int y = ch - '0';

        if (i == 0 && y == 9)
        {
            cout << 9;
        }
        else
        {
            int inverted = 9 - y;
            cout << min(y, inverted);
        }
    }

    return 0;
}