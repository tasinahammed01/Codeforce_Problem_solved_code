#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = (k * l) / nl;  
    int totalLimes = c * d;         
    int totalSalt = p / np;         

    int totalToasts = min({totalDrink, totalLimes, totalSalt});

    cout << totalToasts / n << endl;  
    return 0;
}
