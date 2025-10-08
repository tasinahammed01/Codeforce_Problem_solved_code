#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    string c;
    string mer;

    cin >> a;
    cin >> b;
    cin >> c;

    merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(mer));
    sort(mer.begin(), mer.end());
    sort(c.begin(), c.end());

    if (mer == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
