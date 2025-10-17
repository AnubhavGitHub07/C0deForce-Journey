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
        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        int max_diff = 0;
        for (int i = 0; i < n; i += 2) {
            max_diff = max(max_diff, abs(a[i+1] - a[i]));
        }

        cout << max_diff << "\n";
    }

    return 0;
}
