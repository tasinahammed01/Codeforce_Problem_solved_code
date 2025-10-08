#include <bits/stdc++.h>
using namespace std;

int main()
{

    int Y, W;
    cin >> Y >> W;

    int max_num = max(Y, W);
    int A = 6 - max_num + 1;
    int B = 6;

    int ans = __gcd(A, B);

    cout << A / ans << "/" << B / ans << endl;

    return 0;
}