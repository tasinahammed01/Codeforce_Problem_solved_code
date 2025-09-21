#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    cin >> x;

    string val;

    int ans = 0;

    for (int i = 0; i < x; i++)
    {
        cin >> val;
        if (val == "++X" || val == "X++")
        {
            ++ans;
        }
        else if (val == "--X" || val == "X--")
        {
            --ans;
        }
    }

    cout << ans << endl;

    return 0;
}