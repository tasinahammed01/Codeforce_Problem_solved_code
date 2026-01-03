#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    long long z = 0;
    long long o = 0;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            o++;
        }
        else if (s[i] == '0')
        {
            z++;
        }
    }

    cout << abs(z - o) << endl;

    return 0;
}