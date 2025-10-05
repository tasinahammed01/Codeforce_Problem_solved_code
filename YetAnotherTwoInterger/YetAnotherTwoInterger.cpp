#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long a, b;
        cin >> a >> b;

        if (abs(a - b) % 10 == 0)
        {
            cout << (abs(a - b) / 10) << endl;
        }
        else
        {
            cout << (abs(a - b) / 10) + 1 << endl;
        }
    }

    return 0;
}