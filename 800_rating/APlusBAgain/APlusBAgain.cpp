#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int16_t a;
        cin >> a;

        cout << (a / 10) + (a % 10) << endl;
    }

    return 0;
}