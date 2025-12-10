#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    sort(prices.rbegin(), prices.rend());

    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + prices[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        long long free_value = prefix[x] - prefix[x - y];
        cout << free_value << endl;
    }

    return 0;
}
