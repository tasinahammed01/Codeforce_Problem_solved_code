#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> scr(n);

        for (int i = 0; i < n; i++)
    {
        cin >> scr[i];
    }

    int best = scr[0];
    int worst = scr[0];
    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        if (scr[i] > best)
        {
            ans++;
            best = scr[i];
        }
        else if (scr[i] < worst)
        {
            ans++;
            worst = scr[i];
        }
    }

    cout << ans << endl;

    return 0;
}