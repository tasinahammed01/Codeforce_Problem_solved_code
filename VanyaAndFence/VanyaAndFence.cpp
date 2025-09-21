#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, h;

    cin >> n >> h;

    vector<int> height(n);

    int width = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    for (int i = 0; i < n; i++)
    {
        (height[i] <= h) ? width++ : width += 2;
    }

    cout << width << endl;

    return 0;
}