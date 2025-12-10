#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    string n = "hello";

    int j = 0;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (n[j] == s[i])
        {
            count++;
            j++;
        }
    }

    if (count == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
