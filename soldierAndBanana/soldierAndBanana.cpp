#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k, n, w;
    cin >> k >> n >> w;

    int amount = 0;

    for (int i = 0; i <= w; i++)
    {
        amount += k * i;
    }

    if (amount == n || amount < n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << amount - n << endl;
    }

    return 0;
}