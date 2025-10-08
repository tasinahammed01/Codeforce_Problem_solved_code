#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string aphbt;

    cin >> aphbt;

    for (char &val : aphbt)
    {
        val = tolower(val);
    }

    set<char> word(aphbt.begin(), aphbt.end());

    if (word.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}