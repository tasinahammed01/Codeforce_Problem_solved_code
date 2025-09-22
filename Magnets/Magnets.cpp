#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> position(n);

    int check = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> position[i];
    }

    int ans = 1;
    check = position[0];

    for (int i = 0; i < n; i++)
    {

        if (position[i] != check)
        {
            check = position[i];
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}