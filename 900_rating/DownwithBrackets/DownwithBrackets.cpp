#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int bal = 0;

        bool posible = false;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                bal++;
            }
            else
            {
                bal--;
            }
            if (bal == 0 && i != s.size() - 1)
            {
                posible = true;
            }
        }

        if (posible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}

