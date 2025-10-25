#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> p;

    // Collect indices (1-based) of '0'
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            p.push_back(i + 1);
        }
    }

    cout << p.size() << "\n";

    for (int i = 0; i < p.size(); i++) {
        cout << p[i] << " ";
    }

    cout<<endl;

    
}

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
