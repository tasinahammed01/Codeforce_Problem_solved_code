#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int availableTime = 240 - k;  
    int totalTime = 0;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        if (totalTime + 5 * i <= availableTime) {
            totalTime += 5 * i;
            solved++;
        } else {
            break;
        }
    }

    cout << solved << endl;
    return 0;
}
