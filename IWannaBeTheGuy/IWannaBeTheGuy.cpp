#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    set<int> s;

    int p;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        int p;
        cin >> p;
        s.insert(p);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    if (s.size() == n && *s.begin() == 1)
    {
        cout << "I become the guy." << endl;
    }
    else
    {

        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}