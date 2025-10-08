#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> card(n);

    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }

    int sereja = 0;
    int dima = 0;

    int l = 0;
    int r = n - 1;

    bool turn = true;

    for (int j = 0; j < n; j ++)
    {
        int pick;

        if (card[l] > card[r])
        {
            pick = card[l];
            l++;
        }
        else
        {
            pick = card[r];
            r--;
        }

        if (turn)
            sereja += pick;
        else
            dima += pick;

        turn = !turn;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}