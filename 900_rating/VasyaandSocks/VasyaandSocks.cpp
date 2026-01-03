#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int end = n;

    int count = 0;

    for (int i = 1; i <= end; i++)
    {
        count++;
        if (i % m ==0)
        {
            end++;
        }
    }

    cout << count << endl;

    return 0;
}