#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    string t;
    cin >> t;

    reverse(t.begin(), t.end());

    string ans;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != t[i] || s.length() != t.length())
        {
            ans = "NO";
            break;
        }
        else
        {
            ans = "YES";
        }
    }

    cout << ans << endl;

    return 0;
}
