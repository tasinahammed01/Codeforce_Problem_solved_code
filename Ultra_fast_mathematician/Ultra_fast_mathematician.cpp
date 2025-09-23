#include <bits/stdc++.h>
using namespace std;

int main()
{

    string x, y;
    cin >> x >> y;

    vector<int> ans;

    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] != y[i])
        {
            ans.push_back(1);
        }
        else
        {
            ans.push_back(0);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] ;
    }

    return 0;
}