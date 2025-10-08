#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;

    if (n % 2 == 0)
    {
        cout << 4 << " " << n - 4 << endl;
    }
    else
    {
        cout << 9 << " " << n - 9 << endl;
    }
    return 0;
}