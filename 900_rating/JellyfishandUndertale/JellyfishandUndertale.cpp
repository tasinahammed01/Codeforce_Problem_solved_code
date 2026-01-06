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
        long long a, b, n;
        cin >> a >> b >> n;

        vector<long long> x(n);

        long long ans = b;

        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            ans += min(a - 1, x[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
