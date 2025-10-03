#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int front = 0;
        if (a < b)
        {
            front++;
        }
        if (a < c)
        {
            front++;
        }
        if (a < d)
        {
            front++;
        }
        cout << front << endl;
    }

    return 0;
}