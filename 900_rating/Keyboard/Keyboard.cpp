#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char ch;
    cin >> ch;

    string n;
    cin >> n;

    string ans;

    for (int i = 0; i < n.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (n[i] == s[j])
            {
                if (ch == 'R')
                {
                    ans.push_back(s[j - 1]);
                }
                else if (ch == 'L')
                {

                    ans.push_back(s[j + 1]);
                }
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}
