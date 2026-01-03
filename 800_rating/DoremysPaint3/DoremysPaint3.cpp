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
        int n;
        cin >> n;

        unordered_map<int, int> frq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            frq[x]++;
        }

        if (frq.size() == 1)
        {
            cout << "Yes" << endl;

            continue;
        }

        if (frq.size() > 2)
        {
            cout << "No" << endl;

            continue;
        }

        vector<int> c;
        for (auto &p : frq)
            c.push_back(p.second);

        int odd = (n + 1) / 2;
        int even = n / 2;

        if ((c[0] == odd && c[1] == even) || (c[0] == even && c[1] == odd))
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    return 0;
}
