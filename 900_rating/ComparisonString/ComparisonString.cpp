#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        string s;
        cin >> s;

        char fstChar = s[0];
        int count = 1;
        int ans = 1;

        for (int i = 1; i < n; i++)
        {

            if (s[i] == fstChar)
            {
                count++;
            }
            else
            {
                fstChar = s[i];
                count = 1;
            }
            ans = max(ans, count);
        }

        cout << ans+1 << endl;
    }

    return 0;
}