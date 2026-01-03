#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool isTrue = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '1' && s[i] != '4')
        {
            isTrue = false;
        }
        if (s[0] == '4')
        {
            isTrue = false;
        }
        if (i + 2 < s.size())
        {
            if (s[i] == '4' && s[i + 1] == '4' && s[i + 2] == '4')
                isTrue = false;
        }
    }

    if (isTrue)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
