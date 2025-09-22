#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    long long evenNum = (n / 2);
    long long oddNum = (n + 1) / 2;

    long long f = evenNum * (evenNum + 1) - oddNum * oddNum;

    cout << f << endl;

    return 0;
}