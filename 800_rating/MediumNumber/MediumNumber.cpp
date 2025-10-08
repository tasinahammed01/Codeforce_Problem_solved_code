#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> num;

        num.push_back(a);
        num.push_back(b);
        num.push_back(c);

        sort(num.begin(), num.end());

        cout << num[ 1] << endl;
    }

    return 0;
}
