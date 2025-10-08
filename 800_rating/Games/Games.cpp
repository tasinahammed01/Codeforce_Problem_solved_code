#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    vector<int> color(n);
    vector<int> guest(n);

    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        cin >> color[i] >> guest[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (color[i] == guest[j])
            {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}