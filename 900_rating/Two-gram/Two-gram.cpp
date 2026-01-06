#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans = "";
    int max_count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        string sub = s.substr(i, 2);

        int count = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if (s.substr(j, 2) == sub)
            {
                count++;
            }
        }
        if (max_count < count)
        {
            max_count = count;
            ans = sub;
        }
    }

    cout << ans << endl;

    return 0;
}