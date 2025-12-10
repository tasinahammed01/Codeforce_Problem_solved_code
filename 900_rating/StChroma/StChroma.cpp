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
        int n, x;
        cin >> n >> x;
        vector<int> p;

        if (x == n)
        {
            for (int i = 0; i < n; i++)
                p.push_back(i);
        }
        else if (x == 0)
        {
            for (int i = 1; i < n; i++)
                p.push_back(i);
            p.push_back(0);
        }
        else
        {
            for (int i = 0; i < x; i++)
                p.push_back(i);
            for (int i = x + 1; i < n; i++)
                p.push_back(i);
            p.push_back(x);
        }

        for (int i = 0; i < n; i++)
            cout << p[i] << (i + 1 == n ? '\n' : ' ');
    }

    return 0;
}
