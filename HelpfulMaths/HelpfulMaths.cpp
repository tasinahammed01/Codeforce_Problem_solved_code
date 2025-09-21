#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    string evenVal;
    int ind = 0;

    for (int i = 0; i < s.length(); i += 2)
    {
        evenVal += s[i];
    }

    sort(evenVal.begin(), evenVal.end());

    for (int i = 0; i < s.length(); i += 2)
    {
        s[i] = evenVal[ind++];
    }

    cout << s << endl;

    return 0;
}