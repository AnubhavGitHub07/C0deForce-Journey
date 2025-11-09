#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    long long R, X, D;
    int n;
    cin >> R >> X >> D >> n;

    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            // Always rated
            ans++;
            // Try to keep rating as low as possible (so next '2' can be rated)
            R = max(0LL, X - 1);
        } 
        else { // '2'
            if (R < X) {
                ans++;
                // After playing div2, rating can again vary in [max(0,R-D), R+D]
                // To stay eligible, keep R minimal
                R = max(0LL, X - 1);
            } 
            // else -> cannot play (unrated), rating stays same
        }
    }

    cout << ans << "\n";
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
