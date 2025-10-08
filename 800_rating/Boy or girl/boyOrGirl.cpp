#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    cin >> name;

    sort(name.begin(), name.end());


    int numCount = 0;

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] != name[i + 1])
        {
            numCount++;
        }
    }

    (numCount % 2 == 0) ? cout << "CHAT WITH HER!" << endl : cout << "IGNORE HIM!" << endl;

    return 0;
}
