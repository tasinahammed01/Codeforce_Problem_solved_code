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

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = a[0];

        for (int j = 1; j < n; j++)
        {
            ans &= a[j];
        }

        cout << ans << endl;
    }

    return 0;
}