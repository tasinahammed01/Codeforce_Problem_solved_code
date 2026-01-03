#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<char> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = (n - 1) / 2;
        int r = n / 2;
        int mismatch = 0;

        while (l >= 0 && r < n)
        {
            if (a[l] != a[r])
                mismatch += 2;

            l--;
            r++;
        }

        if (mismatch <= k)
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
