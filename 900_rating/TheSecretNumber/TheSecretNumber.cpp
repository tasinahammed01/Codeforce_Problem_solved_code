#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long  n;
        cin >> n;

        vector<long long> ans;

        for (long long i = 10; i < n; i *= 10)
        {
            if (n % (i + 1) == 0)
            {
                ans.push_back(n / (i + 1));
            }
        }

        if (ans.empty())
            cout << 0 << endl;

        else
        {
            sort(ans.begin(), ans.end());

            cout << ans.size() << endl;

            for (long long i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}