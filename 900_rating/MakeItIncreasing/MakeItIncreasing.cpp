#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long count = 0;
        bool ok = true;

        for (int i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1]) {
                if (a[i] == 0) {  
                    ok = false;
                    break;
                }
                a[i] /= 2;
                count++;
            }
            if (!ok) break;
        }

        if (!ok) cout << -1 << endl;
        else cout << count << endl;
    }

    return 0;
}
