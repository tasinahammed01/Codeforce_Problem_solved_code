#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<char> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];

        vector<char> rev_s(n);
        for (int i = 0; i < n; i++)
            rev_s[i] = s[n - 1 - i];

        bool isLaxi = true;
        for (int i = 0; i < n; i++)
        {
            if (!(s[i] < rev_s[i]))
            {
                isLaxi = false;
                break;
            }
            else if (!(s[i] > rev_s[i]))
            {
                isLaxi = true;
                break;
            }
        }

        if (isLaxi)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
