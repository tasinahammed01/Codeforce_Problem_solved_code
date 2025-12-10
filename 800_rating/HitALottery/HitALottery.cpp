#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;

    cin >> n;

    long long ans = n;

    int count = 0;

    if (n >= 100)
    {
        ans = n / 100;

        n %= 100;
        count += ans;
    }
    if (n >= 20)
    {
        ans = n / 20;
        n %= 20;
        count += ans;
    }
    if (n >= 10)
    {
        ans = n / 10;
        n %= 10;
        count += ans;
    }
    if (n >= 5)
    {
        ans = n / 5;
        n %= 5;
        count += ans;
    }

    cout << count + n << endl;

    return 0;
}