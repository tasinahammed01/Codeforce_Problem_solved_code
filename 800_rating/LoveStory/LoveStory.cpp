#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string a = "codeforces";

    for (int i = 0; i < t; i++)
    {

        string s;
        cin >> s;

        int count = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (a[j] != s[j])
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}