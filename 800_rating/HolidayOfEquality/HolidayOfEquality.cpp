#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = 0;

    for (int j = 0; j < n; j++)
    {
        ans += a[a.size() - 1] - a[j];
    }

    cout << ans << endl;

    return 0;
}
