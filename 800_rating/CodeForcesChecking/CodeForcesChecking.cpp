#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    string a = "codeforces";

    for (int i = 0; i < t; i++)
    {
        char c;
        cin >> c;

        int count = 0;

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == c)
            {
                count++;
            }
        }

        if (count >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}